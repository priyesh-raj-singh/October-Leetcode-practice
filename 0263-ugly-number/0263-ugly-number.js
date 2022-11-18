/**
 * @param {number} n
 * @return {boolean}
 */
var isUgly = function(n) {
    let v = [2, 3, 5];
    if(n<1)
        return false;
    for(let i = 0 ; i<3 ; i++){
        while(n%v[i]==0)
            n = n/v[i];
    }
    return n==1;
    
    
    
    
};