class Solution {
public:
    int maximum69Number (int num) {
        int count = 1;
        string s = to_string(num);
        int i = 0;
        while(i<s.size() and count>0){
            if(s[i]=='6'){
                s[i] = '9';
                    count--;
            }
            i++;
                
        }
        return stoi(s);
        
    }
};