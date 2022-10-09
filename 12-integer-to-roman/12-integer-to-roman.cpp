class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        vector<pair<int , string>> p = {{1000, "M"},{900, "CM"} , {500, "D"},{400, "CD"} , {100, "C"} , {90, "XC"}, {50, "L"}, {40, "XL"},{10, "X"}, {9, "IX"},{5, "V"} , {4, "IV"},{1, "I"} };
        
        while(num>0){
            for(auto x: p){
                if(num>=x.first){
                    ans+=x.second;
                    num = num - x.first;
                    break;
                    
                }
            }
            
        }
        return ans;
        
    }
};