class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int a = -1, c, i, j, l;
        bool f;

        for (i = 0; i < n; i++) {
            c = 0;
            for (j = 0; j <= n - k; j++) {
                f = false;
                for (l = j; l < j + k; l++) {
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