class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int a = -1;

        for (int i = 0; i < n; i++) {
            int c = 0;
            for (int j = 0; j <= n - k; j++) {
                bool f = false;
                for (int l = j; l < j + k; l++) {
                    if (nums[l] == nums[i]) {
                        f = true;
                        break;
                    }
                }
                if (f) {
                    c++;
                }
            }
            if (c == 1) {
                a = max(a, nums[i]);
            }
        }
        return a;
    }
};