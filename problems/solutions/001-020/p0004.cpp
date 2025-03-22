#include <vector>
#include <algorithm>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> nums3;
        double ans = 0;

        nums3.reserve(nums1.size() + nums2.size());
        nums3.insert(nums3.end(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());

        int mid = (nums3.size() / 2 ) ;

        std::sort(nums3.begin(), nums3.end());

        if ( (nums3.size() )% 2 == 0)
        {
            ans = (nums3[mid] + nums3[mid - 1 ] )/ 2.0;
        }
        else
            ans = nums3[mid];

        return ans; 

    }
};