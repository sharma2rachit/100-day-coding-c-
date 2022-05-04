class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
        for (auto& i: s){
            switch(i) {
                case '(' :
                case '{' :
                case '[' :  st.push(i) ;break;
                    case')': if(st.empty() || st.top() != '(') return false; else st.pop();break;
                    case'}': if(st.empty() || st.top() != '{') return false; else st.pop();break;
                    case']': if(st.empty() || st.top() != '[') return false; else st.pop();break;
                default: ;
            }
            
        }
       return st.empty(); 
    }
};