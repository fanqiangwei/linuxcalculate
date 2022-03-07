#include "longestpalindrome.h"
#include <math.h>
#include <vector>

std::string LongestPalindrome::longestPalindrome(std::string s){
    /*
        int len=s.size();
        if(len==0||len==1)
            return s;
        int start=0;//记录回文子串起始位置
        int end=0;//记录回文子串终止位置
        int mlen=0;//记录最大回文子串的长度
        for(int i=0;i<len;i++)
        {
            int len1=expendaroundcenter(s,i,i);//一个元素为中心
            int len2=expendaroundcenter(s,i,i+1);//两个元素为中心
            mlen=std::max(std::max(len1,len2),mlen);
            if(mlen>end-start+1)
            {
                start=i-(mlen-1)/2;
                end=i+mlen/2;
            }
        }
        return s.substr(start,mlen);
    }
    */
        int len=s.size();
        if(len==0||len==1)
            return s;
        int start=0;//回文串起始位置
        int max=1;//回文串最大长度
        std::vector<std::vector<int>>  dp(len,std::vector<int>(len));//定义二维动态数组
        for(int i=0;i<len;i++)//初始化状态
        {
            dp[i][i]=1;
            if(i<len-1&&s[i] == s[i+1])
            {
                dp[i][i+1] = 1;
                max=2;
                start=i;
            }
        }

        for(int l=3;l<=len;l++)//l表示检索的子串长度，等于3表示先检索长度为3的子串
        {
            for(int i=0;i+l-1<len;i++)
            {
                int j=l+i-1;//终止字符位置
                if(s[i]==s[j]&&dp[i+1][j-1]==1)//状态转移
                {
                    dp[i][j] = 1;
                    start=i;
                    max=l;
                }
            }
        }
        return s.substr(start,max);//获取最长回文子串

}

int LongestPalindrome::expendaroundcenter(std::string s,int left,int right)
//计算以left和right为中心的回文串长度
{
    int L=left;
    int R=right;
    while(L>=0 && R<s.length() && s[R]==s[L])
    {
        L--;
        R++;
    }
    return R-L-1;
}
