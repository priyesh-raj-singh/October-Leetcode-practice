class Solution {
public:
    
    static bool cmp(pair<string , int> a , pair<string , int> b){
        if(a.second!=b.second)
            return a.second>b.second;
        
        return a.first<b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string , int> mp;
        for(int i = 0 ; i<words.size() ; i++)
            mp[words[i]]++;
        
        vector<string> ans;
        
       vector<pair<string , int>> p;
        
        for(auto it: mp){
            p.push_back({it.first , it.second});
            
        }
        
        sort(p.begin() , p.end() , cmp);
        
        int temp = 0;
        for(auto it: p){
            if(temp<k){
                ans.push_back(it.first);
                temp++;
            }
        }
        return ans;
        
    }
};