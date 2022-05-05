class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
   for(int j=0,i=0;i<nums.size();i++){
       if (nums[i]%2==0) {
           swap(nums[i],nums[j]);
           j++;
       }      
   }
        return nums;
                
        }
};