class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int n = nums.size();
        int minl = INT_MAX;

        while (right < n) {

            sum += nums[right];
            right++;

            while (sum >= target) {

                minl = min(minl, right - left);

                sum -= nums[left];
                left++;
            }
        }

        if (minl == INT_MAX) {
            return 0;
        }

        return minl;
    }
};