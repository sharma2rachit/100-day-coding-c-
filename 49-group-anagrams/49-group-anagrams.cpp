class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string,vector<string>> mp;
            string temp;
            int n=str.size();
        
        for(auto i=0;i<n;i++){
            temp=str[i];
            sort(str[i].begin(),str[i].end());
            mp[str[i]].push_back(temp);            
        }
        vector<vector<string>> res;
        
        for(auto itr=mp.begin(); itr!=mp.end(); ++itr){
            res.push_back(itr->second);
       }
        return res;
    }
};