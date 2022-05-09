class Solution {
public:
    void compare(string str, int i, string n, vector<string> &num, vector<string> &apt){
    if(i==n.size()) {
        apt.push_back(str);
        return;
    }
    for(int j=0; j<num[n[i] - '2'].size(); j++){
        str.push_back(num[n[i] - '2'][j]);
        compare(str, i+1, n, num, apt);
        str.pop_back();
    }
}
    public:
    
vector<string> letterCombinations(string digits) {
    vector<string> number;
    number.push_back("abc");
    number.push_back("def");
    number.push_back("ghi");
    number.push_back("jkl");
    number.push_back("mno");
    number.push_back("pqrs");
    number.push_back("tuv");
    number.push_back("wxyz");
    string s;
    vector<string> ans;
    if(digits.size()==0)
        return ans;
    compare(s, 0, digits, number, ans);
    return ans;    
}
   
};