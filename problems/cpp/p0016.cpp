/*

    - 16. 3Sum Closet
        Given an integer array nums of length n and an integer target, find three integers 
        in nums such that the sum is closest to target.

        Return the sum of the three integers.

        You may assume that each input would have exactly one solution.

        Example 1:

            Input: nums = [-1,2,1,-4], target = 1
            Output: 2
            Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

        Example 2:

            Input: nums = [0,0,0], target = 1
            Output: 0
            Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).

        Constraints:

            3 <= nums.length <= 500
            -1000 <= nums[i] <= 1000
            -104 <= target <= 104

*/


#include <cmath>
#include <algorithm>

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        std::sort( nums.begin(), nums.end());

        int min =abs( abs( nums[0] + nums[1] + nums[2] - target) ) ;
        int retValue = nums[0] + nums[1] + nums[2];

        for ( int x = 0; x < nums.size() - 2; x++ )
            for (int y = x + 1; y < nums.size() - 1 ; y++ )
                for (int z = y + 1; z < nums.size(); z++ )
                {

                    if ( min > abs( nums[x] + nums[y] + nums[z] - target ) )
                    {
                        min =abs( nums[x] + nums[y] + nums[z] - target );
                        retValue = nums[x] + nums[y] + nums[z];

                    }

                }

        return retValue;
    }
};