#include <algorithm>
#include <vector>
#include <unordered_set>

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> temp;
        vector<int> answer;
        vector<int> last;

        sort(nums.begin(), nums.end());


    if ( nums.size() >=4 )
        for ( int a = 0 ; a < nums.size() - 3; ++a )
        {
            for (int b = 1 + a; b < nums.size() - 2 ; ++b )
            {
                for (int c = 1 + b ; c < nums.size() - 1 ; ++c  )
                {
                    for (int d = c + 1; d < nums.size() ; ++d )
                    {
                        if ( ( nums[a]  + nums[b]+ nums[c] + nums[d] ) == target ){

                            answer.push_back(nums[a]);
                            answer.push_back(nums[b]);
                            answer.push_back(nums[c]);
                            answer.push_back(nums[d]);

                            temp.push_back(answer);
                            answer.clear();
                        }

                    }
                }
            }
        }

    auto it = unique( temp.begin(), temp.end() );
    temp.erase(it, temp.end());
    // sort(temp.begin(), temp.end());

    return temp;
    }
};