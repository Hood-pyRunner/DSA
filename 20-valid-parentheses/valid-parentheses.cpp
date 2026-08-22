class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        string st = "";
        int i, stn;
        bool b;

        for(i = 0; i<n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st += s[i];
                stn = st.length();
            }
            else{
                if(st.empty()){
                    return false;
                }

                if(s[i] != map<char, char>{{'(', ')'}, {'{', '}'}, {'[', ']'}}[st.back()]){
                    return false;
                }

                st.pop_back();
            }
        }

        if(st == ""){
            b = true;
        }
        else{
            b = false;
        }
        return b;
    }
};