class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size() , m = p.size();
        vector<vector<bool>> dp(n+1,vector<bool>(m+1,0));
        dp[0][0] = true;
        for(int j = 1;j <= m;j++)
        {
            if(p[j-1] == '*')
            {//确定前面能否与空字符串匹配
                dp[0][j] = dp[0][j-2];
            }
            for(int i = 1;i <= n;i++)
            {
                if(s[i-1] == p[j-1] || p[j-1] == '.') dp[i][j] = dp[i-1][j-1];
                else
                {
                    if(p[j-1] == '*')
                    {
                        if(p[j-2] == s[i-1] || p[j-2] == '.') dp[i][j] = dp[i-1][j];//为*k
                        dp[i][j] = dp[i][j] || dp[i][j-2];//*0
                    }
                }
            }
        }
        return dp[n][m];
    }
};
