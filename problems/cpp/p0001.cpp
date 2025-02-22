class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
	
			for (int i = 0; i < nums.size() - 1; i++ ){
				for ( int j = i + 1; j < nums.size(); j++ ){
					if ( nums[i] + nums[j] == target )
						return {i,j};
				}
			}
	
			return {0,1};
		}
	};

class Solution_02 {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			unordered_map<int, int> uoMap;
			size_t n = nums.size();
	
			// Populate Hash table
			for ( size_t ndx = 0; ndx < n; ndx++ ){
				uoMap[nums[ndx]] = ndx;
			}
		
			// Find the complement
			for ( int ndx = 0; ndx < n; ndx++ ){
				int complement = target - nums[ndx];
				if ( uoMap.count(complement) && uoMap[complement] !=ndx){
					return { ndx, uoMap[complement] };
				}
			}
	
			// No solution found
			return {};
		}
	};

class Solution_03 {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			unordered_map<int, int> uoMap;
			size_t n = nums.size();
	
			for (int ndx = 0; ndx < n; ndx++)
			{
				int complement = target - nums[ndx];
	
				if ( uoMap.count(complement)) {
					return { uoMap[complement], ndx};
				}
	
				uoMap[nums[ndx]] = ndx;
			}
		
		
			// No solution found
			return {};
		}
	};