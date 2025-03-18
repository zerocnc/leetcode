class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            size_t ndx = 0;
            size_t count = 0;
    
            vector<int> temp;
    
            for (auto num : nums ){
                if ( num != val )
                {
                    temp.push_back(num);
                    count++;
                }
                    
            }
    
            for ( size_t ndx = 0; ndx < count; ++ndx){
                nums[ndx] = temp[ndx];
            }
    
            return count;
    
        }
    };