class Solution {
public:
    
    void generate(string &s,vector<string> &ans,int open ,int close){
        
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        
        
        if(open>0){
            s.push_back('(');
            generate(s,ans,open-1,close);
            s.pop_back();
        }
        if(close>0 && open<close){
            s.push_back(')');
            generate(s,ans,open,close-1);
            s.pop_back();
        }
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        generate(s,ans,n,n);
        return ans;
    }
};