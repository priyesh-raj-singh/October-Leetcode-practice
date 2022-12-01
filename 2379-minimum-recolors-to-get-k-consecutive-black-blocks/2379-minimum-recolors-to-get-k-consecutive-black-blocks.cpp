class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i = 0 , j = 0 ;
        int n = blocks.size();
        int w = 0 , ans = INT_MAX;
        
        while(j<n){
            if(blocks[j]=='W')
                w++;
            
            
            if(j-i+1==k){
                ans = min(ans , w);
                
                if(blocks[i]=='W')
                    w--;
                
                i++;
            }
           
            j++;
            
            
        }
        return ans ;
        
    }
};