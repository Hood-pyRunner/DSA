class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int i = 0, j = 0, t = 1, mid = 0, k = 0;         
        string output = "";  

        if(n <= 1) {
            return s;
        }
        for(i = 0; i<(2*(n - 1)); i++) {            
            k = i / 2;           
            if (i % 2 == 0) {
                j = k;      
            } else {
                j = k + 1;  
            }
            while(k >= 0 && j < n && s[k] == s[j]) {
                if (j - k + 1 > t) {
                    t = j - k + 1;
                    mid = k;
                }
                k--;
                j++;
            }
        }
        for(i = mid; i < mid + t; i++) {
            output += s[i];
        }
        return output;
    }
};