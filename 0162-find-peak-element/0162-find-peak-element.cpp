class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 1;
        int r = nums.size() - 2;
        int h = 0;
        int mid = 0;
        int n = nums.size();
        if (n == 1) {
            return 0;
        }
        if (nums[0] > nums[1]) {
            return 0;
        }
        if (nums[n - 1] > nums[n - 2]) {
            return n - 1;
        }

        while (l <= r) {
            mid = (r + l) / 2;
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                return mid;
            } else if (nums[mid] < nums[mid + 1]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return false ;
    }
};