class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int , int, greater<int> > mp;
        for(int i = 0 ; i<nums.size() ; i++)
            mp[nums[i]]++;
        
        for(auto it: mp){
            if(mp.count(0-it.first))
                return it.first;
        }
        return -1;
        
        
    }
};