class Solution {
public:
    bool isVowel(char a){
        if(a=='a' or a=='e' or a=='i' or a=='o' or a=='u' or a=='A' or a=='E' or a=='I' or a=='O' or a=='U')
           return true;
        
        return false;
           
    }
    bool halvesAreAlike(string s) {
        int count1 = 0;
        int count2 = 0;
        int n = s.size();
        for(int i = 0 ; i<n/2 ; i++)
            if(isVowel(s[i]))
                count1++;
        
        for(int i = n/2 ; i<n ; i++)
            if(isVowel(s[i]))
                count2++;
        
        return count1==count2;
        
    }
};