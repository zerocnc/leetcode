class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
    
            for ( size_t ndx = 0; ndx < nums.size() - 1; ndx++ ){
                if ( nums[ndx] == nums[ ndx + 1 ]){
                    nums[ndx] *= 2;
                    nums[ndx+1] = 0;
                }
            }
    
            for ( size_t i = 0; i < nums.size() - 1; ++i ){
                for ( size_t j = i + 1; j < nums.size(); ++j ){
                    if ( nums[i] == 0 ){
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                    }
                }
            }
    
            return nums;
    
        }
    };