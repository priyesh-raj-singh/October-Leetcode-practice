class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0 , j = nums.size()-1;
        int k = 0 ;
        while(k<nums.size()){
            if(-nums[i]==nums[j]) return nums[j];
            
            else if(-nums[i]<nums[j]) j--;
            else i++;
            k++;
        }
        return -1;
        
    }
};