class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string a = "";
        string b = "";
        
        // if(word1.size()!=word2.size())
        //     return false;
        
        for(int i = 0 ; i<word1.size() ; i++){
            a+=word1[i];
                
        }
        for(int i = 0 ; i<word2.size() ; i++){
            b+=word2[i];
                
        }
        
        return a==b;
    }
};