class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            vector<int> myTemp;
            size_t count = 0;
            size_t count2 = 0;
            size_t point_1 = 0;
    
            for ( size_t ndx = 0; ndx < nums.size() - 1; ndx++ ){
                if ( nums[ndx] == nums[ ndx + 1 ]){
                    nums[ndx] *= 2;
                    nums[ndx+1] = 0;
                    count++;
                }
            }
    
            for ( auto num : nums ){
                if ( num != 0){
                    myTemp.push_back(num);
                    count2++;
                }
            }
    
            if (count == 0)
                count;
    
            myTemp.insert( myTemp.end(), count2, 0);
    
            return myTemp;
    
        }
    };