#include "plus.h"
#include <map>
vector<int> Plus::twoSum(vector<int> &numbers , int target)
{
    vector<int> v(1,1);
    map<int, int> a;
    for(int i = 0; i < numbers.size(); i++){
        if(a.count(target - numbers[i]) > 0){
            v[1] = i;
            v[0] = a[target - numbers[i]];
            break;
        }
        a[numbers[i]] = i;
    }
    return v;
}