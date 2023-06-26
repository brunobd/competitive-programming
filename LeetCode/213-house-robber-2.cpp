#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int size =nums.size();
        
        if(size == 1) return nums[0];
        return max(rob1(nums,0,size-1),rob1(nums,1,size));
    }
    int rob1(vector<int> &nums,int begin, int end)
    {
        if (nums.size() == 0)
            return 0;
        int prev1 = 0;
        int prev2 = 0;
        for (int i = begin; i < end; i++)
        {
            int temp = prev1;
            prev1 = max(prev2 + nums[i], prev1);
            prev2 = temp;
        }
        return prev1;
    }
};
// 
// Category:    Dynamic Programming
// Status:      Accepted
// 