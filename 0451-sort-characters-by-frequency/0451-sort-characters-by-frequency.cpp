class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int> mp;
        for(int i = 0 ; i<s.size() ; i++)
            mp[s[i]]++;
        
        vector<pair<int , char>> v;
        for(auto it: mp){
            v.push_back(make_pair(it.second , it.first));
            
        }
        
        sort(v.begin() , v.end());
        string ans = "";
        
        for(auto it: v){
            while(it.first--)
                ans+=it.second;
        }
        reverse(ans.begin() , ans.end());
        return ans;
        
    }
};