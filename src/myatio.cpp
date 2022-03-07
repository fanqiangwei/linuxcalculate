#include "myatio.h"
#include  <limits.h>
int MyAtio::myAtio(std::string s){

    int i = 0, sign = 1, tmp = 0;       

    while(s[i] == ' ')  ++i;              
    if(s[i] == '+' || s[i] == '-')        
        sign = (s[i++] == '-') ? -1 : 1;  

    while(s[i] >= '0' && s[i] <= '9')    
    {
        if(tmp > INT_MAX / 10 || (tmp == INT_MAX / 10 && s[i] - '0' > 7)) 
            return sign == 1 ? INT_MAX : INT_MIN;
        tmp = tmp * 10 + (s[i++] - '0');  
    }
    return tmp * sign;

}
