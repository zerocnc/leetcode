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