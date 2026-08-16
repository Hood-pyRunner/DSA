class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int count = 0, max = 0;
        int i = 0, j = 0;
        int f[50] = {};

        while (j < n) {
            f[s[j] - 'a']++;
            count++;
            while (f[s[j] - 'a'] > 2) {
                f[s[i] - 'a']--;
                i++;
                count--;
            }
            if (max < count) {
                max = count;
            }
            j++;
        }
        return max;
    }
};