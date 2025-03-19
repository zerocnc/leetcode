class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            vector<int> myTemp;
            size_t count = 0;
            size_t point_1 = 0;
    
            for ( size_t ndx = 0; ndx < nums.size() - 1; ndx++ ){
                if ( nums[ndx] == nums[ ndx + 1 ]){
                    nums[ndx] *= 2;
                    nums[ndx+1] = 0;
                    count++;
                }
            }
    
            for ( size_t ndx = 0; ndx < nums.size(); ndx++ ){
                if ( nums[ndx] != 0 ){
                    nums[point_1++] = nums[ndx];
                }
            }
    
            for ( size_t ndx = nums.size() - 1; ndx > 0; --ndx){
                nums[ndx] = 0;
            }
    
            return nums;
    
        }
    };