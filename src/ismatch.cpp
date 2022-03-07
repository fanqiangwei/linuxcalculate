#include "ismatch.h"
#include <vector>
bool IsMatch::isMatch(std::string s, std::string p){
        int m=s.size(),n=p.size();
        std::vector<std::vector<int> > dp(m+1,std::vector<int>(n+1,false));
        dp[0][0]=true;
        for(int i=2;i<=n;i++){
            if(p[i-1]=='*')
            dp[0][i]=dp[0][i-2];
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(p[j-1]=='*'){
                     dp[i][j]=dp[i][j-2]||(dp[i-1][j]&&(s[i-1]==p[j-2]||p[j-2]=='.'));
                }
                else{
                     dp[i][j]=dp[i-1][j-1]&&(s[i-1]==p[j-1]||p[j-1]=='.');
                }
            }
        }
        return dp[m][n];
}

