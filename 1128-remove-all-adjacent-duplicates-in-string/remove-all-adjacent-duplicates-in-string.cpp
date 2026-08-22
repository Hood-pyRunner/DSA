class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> s1;
        int n = s.length();
        string st = "";
        int i = 0;

        while (i<n){
            if (s1.empty()) {
                s1.push(s[i]);
            }
            else if (s1.top() != s[i]){
                s1.push(s[i]);
            }
            else {
                s1.pop();
            }
            i++;
        }
        while (s1.empty() == false) {
            st = s1.top() + st;
            s1.pop();
        }
        return st;
    }
};