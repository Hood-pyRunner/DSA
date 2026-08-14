class Solution {
public:
    void reverseString(vector<char>& s) {
        int strlen = s.size();
        for(int i = 0; i<strlen; i++){
            int temp = s[i];
            s[i] = s[strlen-1];
            s[strlen-1] = temp;
            strlen--;
        }
    }
};