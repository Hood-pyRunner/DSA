class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int count = 0, max = 0;
        int i = 0, j = 0;
        int freq[50] = {};

        while (j < n) {
            freq[s[j] - 'a']++;
            count++;
            while (freq[s[j] - 'a'] > 2) {
                freq[s[i] - 'a']--;
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