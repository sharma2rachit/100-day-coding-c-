class Solution {
public:
    string convertString(string s){
        string temp;
        for(char i : s){
            if(temp.size() && i == '#') temp.pop_back(); // means temp is not empty... so we'll pop last character...
            else if(i == '#'); // means temp is empty... so we'll do nothing...
            else temp.push_back(i); // otherwise add to our answer...
        }
        return temp;
    }
    bool backspaceCompare(string s, string t) {
        return convertString(s) == convertString(t);
    }
};