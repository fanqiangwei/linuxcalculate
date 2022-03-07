#include "convert.h"

std::string Convert::convert(std::string s, int numRows)
{
        int n = s.size();
        if(numRows==1 || numRows>=n) return s;
        int T=2*numRows-2;
        std::string ans;
        for(int r=0;r<numRows;r++){
            for(int i=r;i<n;i+=T){
                ans+=s[i];
                if(r!=0 && r!=numRows-1){
                    int j=T-2*r+i;
                    if(j<n)ans+=s[j];
                }                
            }
        }
        return ans;
}