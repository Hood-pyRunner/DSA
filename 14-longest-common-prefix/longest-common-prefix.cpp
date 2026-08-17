class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int i, j, min = 0;
        string pre = " ";

        min = strs[0].length();

        for(i = 0; i < n - 1; i++){
            if(strs[i].length() <= strs[i+1].length() && strs[i].length() < min){
                min = strs[i].length();
            }
            else if (strs[i+1].length() <= strs[i].length() && strs[i+1].length() < min) {
                min = strs[i+1].length();
            }
        }

        for(j = 1; j < min; j++){
            pre += " "; 
        }

        for(i = 0; i < n - 1; i++){
            for(j = 0; j < min; j++){
                if(strs[i][j] == strs[i+1][j]){
                    pre[j] = strs[i][j];
                }
                else{
                    min = j; 
                    break;
                }
            }
        }

        string fpre = "";
        for(j = 0; j < min; j++){
            fpre += pre[j];
        }
        pre = fpre;

        if(strs.size() == 1){
            pre = strs[0];
        }
        else if(pre == " "){
            pre = "";
        }
        
        return pre;
    }
};