class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted(nums);
        sort(sorted.begin(),sorted.end());
           int n=nums.size(),i=0,j=n-1;
        while(i<n && sorted[i]==nums[i]) i++;
        while(j>i && sorted[j]==nums[j]) j--;
        return j+1-i;
    }
};