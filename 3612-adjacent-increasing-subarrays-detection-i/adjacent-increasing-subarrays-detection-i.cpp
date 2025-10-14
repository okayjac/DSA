class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;

        while (i + 2 * k <= n) 
        {
            bool first = true, second = true;
            for (int j = i + 1; j < i + k; j++) {
                if (nums[j] <= nums[j - 1]) {
                    first = false;
                    break;
                }
            }

            for (int j = i + k + 1; j < i + 2 * k; j++) {
                if (nums[j] <= nums[j - 1]) {
                    second = false;
                    break;
                }
            }

            if (first && second) return true;
            i++;
        }

        return false;
    }
};
