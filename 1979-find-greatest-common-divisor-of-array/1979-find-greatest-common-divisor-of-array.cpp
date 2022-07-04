class Solution {
public:
    int gcd(int a ,int b){
        if(a==0) return b;
        return gcd(b%a,a);
    }
    
    int findGCD(vector<int>& nums) {
        int min=1001;
        int max=0;
        for(auto i:nums){
            if(i<min) min=i;
            if(i>max) max=i;
        }
      return gcd(min,max);        
        
    }
};