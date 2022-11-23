class Solution {
public:
    int reverse(int num){
        int ans = 0;
        while(num!=0){
            ans = ans*10 + (num%10);
            num/=10;
        }
        return ans;
    }
    bool isSameAfterReversals(int num) {
        int x = reverse(num);
        int y = reverse(x);
        return y==num;
        
    }
};