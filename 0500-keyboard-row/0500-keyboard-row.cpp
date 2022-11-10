class Solution {
public:
    string a = "qwertyuiopQWERTYUIOP";
    string b = "asdfghjklASDFGHJKL";
    string c = "zxcvbnmZXCVBNM";
    
    bool isPart(string &word){
        if(a.find(word[0])!=string::npos){
            for(int i = 1 ; i<word.size() ; i++){
                if(a.find(word[i])==string::npos)
                    return false;
                
                
            }
        }
        else if(b.find(word[0])!=string::npos){
            for(int i = 1 ; i<word.size() ; i++){
                if(b.find(word[i])==string::npos)
                    return false;
            }
        }
        else{
            for(int i = 1 ; i<word.size() ; i++){
                if(c.find(word[i])==string::npos)
                    return false;
            }
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for(int i = 0 ; i<words.size() ; i++){
            if(isPart(words[i]))
                ans.push_back(words[i]);
        }
        return ans;
        
    }
};