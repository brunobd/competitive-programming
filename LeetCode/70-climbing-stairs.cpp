class Solution {
public:
    static int climbStairs(int n) {
        int one_step=1, two_steps=1;
        for(int i = 0; i<(n-1);i++)
        {
            int temp = one_step;
            one_step = one_step + two_steps;
            two_steps= temp;
        }
        return one_step;    
    }
};
// Category:    Dynamic Programming;
// Status:      Accepted;