class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end());
        for(int i = 0 ; i<nums.size() ; i++){
            if(maxi ==nums[i])
                return i;
        }
        return 0;
        
    }
};