class Solution {
public:
    bool check(string& allowed , string &s){
        for(int i = 0 ; i<s.size() ; i++){
            if(allowed.find(s[i])==string::npos)
                return false;
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        for(int i = 0 ; i<words.size() ; i++){
            if(check(allowed , words[i]))
                count++;
        }
        return count;
        
    }
};