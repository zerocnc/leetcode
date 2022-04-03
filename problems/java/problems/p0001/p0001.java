import java.util.ArrayList;
import java.util.HashMap;

class Solution {

    public Solution() {
    }

    public int[] twoSumA(int[] nums, int target) {

        HashMap<Integer, ArrayList<Integer>> my_map = new HashMap<Integer, ArrayList<Integer>>(nums.length);
        int[] arr = { 0, 0 };

        for (int ndx = 0; ndx < nums.length; ++ndx) {
            if (!my_map.containsKey(nums[ndx])) {
                my_map.put(nums[ndx], new ArrayList<Integer>());
            }

            Integer temp = target - nums[ndx];
            my_map.get(nums[ndx]).add(ndx);

            if (my_map.containsKey(temp)) {
                Integer posX = my_map.get(temp).get(0);
                if (posX != ndx) {
                    arr[0] = posX;
                    arr[1] = ndx;
                    return arr;
                }
            }
        }

        return arr;
    }

    public int[] twoSumB(int[] nums, int target) {
        HashMap<Integer, Integer> my_map = new HashMap<Integer, Integer>(nums.length);
        int ndx = 0;

        for (int num : nums) {
            if (my_map.containsKey(target - num)) {
                return new int[] { ndx, my_map.get(target - num) };
            }
            my_map.put(nums[ndx], ndx);
            ndx++;
        }

        return new int[] { -1, -1 };
    }
}
