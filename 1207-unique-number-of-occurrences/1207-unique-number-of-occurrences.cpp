class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> mp;
        set<int> p;
        for(int i = 0 ; i<arr.size() ; i++){
            p.insert(arr[i]);
            mp[arr[i]]++;
        }
        set<int> s;
        
        for(auto it: mp){
            s.insert(it.second);
        }
        
        return s.size() == p.size();
        
        

        
    }
};