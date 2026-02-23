class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> st;
        string forward = "";
        int n = s.length();
        for(int i=0; i<n; i++){
            if((s[i]>='A' && s[i]<= 'Z') || (s[i]>='a' && s[i]<='z') || ('0'<=s[i] && s[i]<='9')){
                if(int(s[i]) < 97 && s[i]>64){
                    forward.push_back(int(s[i])+32);
                    st.push(int(s[i]) + 32);

                }
                else{
                    forward.push_back(int(s[i]));
                    st.push(int(s[i]));
                }
            }
        }
        for(int i=0; i<forward.length(); i++){
            if(forward[i] != st.top()){
                return false;
            }
            st.pop();
        }
        return true;

    }
};