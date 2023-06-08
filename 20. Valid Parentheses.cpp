class Solution{
private:
    inline bool isstart(char c){
        if(c == '(' || c == '{' || c == '[') return true;
        return false;
    }
    inline bool typesame(char a , char b){
        if(a == '{' && b == '}') return true;
        if(a == '[' && b == ']') return true;
        if(a == '(' && b == ')') return true;
        return false;
    }
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0 ; i< s.length(); i++){
            // If stack is empty
            if(st.size() == 0){
                // the character to pus is the opening bracket
                if(isstart(s[i])){
                    st.push(s[i]);
                }else{
                    return false;
                }
            }
            // If stack is not empty
            else{
                // new open bracket to be inserted
                if(isstart(s[i])){
                    st.push(s[i]);
                }
                // inserting closing bracket
                else{
                    char ch = st.top();
                    // making sure inserting closing bracket after its own opening bracket
                    if(typesame(ch,s[i])){
                        st.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        // checking all open brackets are consumed 
        return st.empty();
    }
};