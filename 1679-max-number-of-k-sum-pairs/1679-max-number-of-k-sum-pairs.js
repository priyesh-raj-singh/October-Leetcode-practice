class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int , int> mp;
        for(int i = 0 ; i<nums.size() ; i++){
            int a =  k - nums[i];
            if(mp[a]>0){
                count++;
                mp[a]--;
            }
            else
                mp[nums[i]]++;
        }
        return count;
        
    }
};