#include <bits/stdc++.h>
using namespace std;
class Solution1 {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        for(int i = cost.size()-3; i>=0;i--)
            cost[i] += min(cost[i+1],cost[i+2]);

        return min(cost[0],cost[1]);
        
    }
};
// Category:    Dynamic Programming;
// Status:      Accepted;
class Solution2 {
public:
    static int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int *dp =  new int[n];
        for(int i = 0; i<n;i++)
        {
            if(i<2) dp[i] = cost[i];
            else dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);        
    }
};
class Solution3 {
public:
    static int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int previous_one = cost[1];
        int previous_two = cost[0];
        if(n<2) return min(previous_one,previous_two);
        for(int i = 2; i<n;i++)
        {
            int current = cost[i] + min(previous_one,previous_two);
            previous_two = previous_one;
            previous_one = current; 

        }
        return min(previous_one,previous_two);
    }
};

int main()
{
    vector<int> cost = {10,15,20};
    cout<<Solution3::minCostClimbingStairs(cost)<<endl;
}
