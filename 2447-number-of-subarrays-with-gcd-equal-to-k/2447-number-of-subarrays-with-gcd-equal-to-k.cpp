class Solution {
public:
    int gcd(int a , int b){
        if(b==0) return a;
        
        return gcd(b , a%b);
    }
    int subarrayGCD(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            int currHcf = nums[i];
            
            for(int j = i ; j<nums.size() ; j++){
                currHcf = gcd(currHcf , nums[j]);
                if(currHcf==k)
                    count++;
            }
        }
        return count;
        
    }
};