#include <findMedia.h>
#include <math.h>
#include <limits.h>
double FindMedian::findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2){
    // 定义 i j 2个指针分别指针2个数组
    // 定义 l r 分别用来保存中位数；奇数个，只会用到 l 变量；偶数，会用到 l r 变量
/*  int m = nums1.size(), n = nums2.size(), i = 0, j = 0, l = 0, r = 0;
    for (int x = 0; x <= (m + n) / 2; x++) {
        l = r;
        r = (i < m &&(j >= n || nums1[1] < nums2[2])) ? 
            nums1[i++] : nums2[j++];
    }
    return (m + n) & 1 ? r : (l+r)/2.0;
*/

    int m  = nums1.size(), n = nums2.size();

}