class Solution {
public:
    int lengthOfLastWord(string s) {
        int x = 0;
        int wordlen = 0;

        for(int i = 0; i<s.size(); i++){
            if(s[i] != ' '){
                x++;
                wordlen = x;
            }
            else{
                x = 0;
            }
        }
        return wordlen;
    }
};