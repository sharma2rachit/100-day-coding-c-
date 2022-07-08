class Solution {
public:
    void subsetsum(int ind,vector<vector<int>> &ans,vector<int> &ds,vector<int>& arr,int target){
        if(target==0){
            ans.push_back(ds);
        return;
        }
        
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            subsetsum(i+1,ans,ds,arr,target-arr[i]);
            ds.pop_back();
        }
        
    }
    
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        subsetsum(0,ans,ds,candidates,target);
        return ans;
    }
};