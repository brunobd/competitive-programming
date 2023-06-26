class Solution
{
public:
    static string longestPalindrome(string s)
    {
        string res;
        int res_size = 0;
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            // Odd length
            int l = i, r = i;
            while (l >= 0 and r < size and s[l] == s[r])
            {
                if ((r - l + 1) > res_size)
                {
                    res_size = r - l + 1;
                    res = s.substr(l, res_size);
                }
                l -= 1;
                r += 1;
            }

            // Even length
            l = i, r = i+1;
            while (l >= 0 and r < size and s[l] == s[r])
            {
                if ((r - l + 1) > res_size)
                {
                    res_size = r - l + 1;
                    res = s.substr(l, res_size);
                }
                l -= 1;
                r += 1;
            }
        }
        return res;
    }
};
// Category:    String;
// Status:      Accepted