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


    class Solution_02 {
        public:
            vector<int> applyOperations(vector<int>& nums) {
                int count = 0;
                size_t point_1 = 0;
        
                for ( size_t ndx = 0; ndx < nums.size() - 1; ndx++ ){
                    if ( nums[ndx] == nums[ ndx + 1 ]){
                        nums[ndx] *= 2;
                        nums[ndx+1] = 0;
                        count++;
                    }
                }
        
                for ( size_t ndx = 0; ndx < nums.size(); ++ndx ){
                    if ( nums[ndx] != 0){
                        nums[point_1++] = nums[ndx];
                    }
                }
        
                while ( point_1 < nums.size() ){
                    nums[point_1++] = 0;
                }
        
        
                return nums;
        
            }
        };