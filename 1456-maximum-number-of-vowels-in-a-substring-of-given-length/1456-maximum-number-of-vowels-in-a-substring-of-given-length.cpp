class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int i = 0;
        int j = 0;
        int maxi = 0 , c = 0;
        while(j<n){
            if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u')
                c++;
            
            if(j-i+1<k) j++;
            
            else if(j-i+1){
                maxi = max(c , maxi);
                
                if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u')
                    c--;
                i++;
                j++;
                
            }
                
        }
        return maxi;
        
    }
};