class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int front=0, rear=nums.size()-1;
        vector<pair<int,int>> v;
        for(int i=0;i<=rear;i++) v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        while(front<rear){
        int sum=v[front].first+v[rear].first;
            if(sum==target) break;
            else if (sum>target) rear--;
            else front++;
          }
        return {v[front].second,v[rear].second};
    }
};