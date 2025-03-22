class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int lastInt = -101;
            size_t count = 0;
            size_t nums_size = nums.size();
            std::vector<int> temp;
    
            for ( auto num : nums ){
                if (lastInt != num ){
                    temp.push_back(num);
                    lastInt = num;
                    count++;
                }
            }
    
            for ( size_t ndx = 0; ndx < count; ++ndx ){
                nums[ndx] = temp[ndx];
            }
    
            for (size_t ndx = count; ndx < nums_size; ndx++ ){
                nums[ndx] = 0;
            }
    
            return count;
        }
    };