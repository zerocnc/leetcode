#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
		std::vector<int> temp;

		for (int i = 0; i < nums.size() - 1; i++)
		{
			for (int j = 1+i; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					temp.push_back(i);
					temp.push_back(j);
					return temp;
				}
			}
		}

		return temp;
    }
    
};
