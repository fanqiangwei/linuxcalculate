#include "reverse.h"
#include "unistd.h"
#include "limits.h"
int Reverse::reverse(int x)
{   
    if(x/10 == 0)
        return x;
    int y = 0;
    while(x){
        if(y > INT_MAX/10 || y < INT_MIN/10)
        {
            return 0;
        }
        int a = x % 10;
        y = y * 10 + a;
        x = x/10; 
    }
    return y;
}
