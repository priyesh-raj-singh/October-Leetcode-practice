class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        
        if(n!=m)
            return false;
         
        unordered_map<char , int> mp1;
        unordered_map<char , int> mp2;
        
        set<char> s1 , s2;
        
        for(int i = 0 ; i<n ; i++){
            s1.insert(word1[i]);
            mp1[word1[i]]++;
        }
        
        for(int i = 0 ; i<m ; i++){
            s2.insert(word2[i]);
            mp2[word2[i]]++;
        }
        
        vector<int> v1 , v2;
        for(auto it: mp1)
            v1.push_back(it.second);
        for(auto it: mp2)
            v2.push_back(it.second);
        
        sort(v1.begin() , v1.end());
        sort(v2.begin() , v2.end());
        
        if(s1==s2 and v1==v2)
            return true;
        return false;
        
    }
};