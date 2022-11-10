/**
 * @param {string} s
 * @return {string}
 */
var removeDuplicates = function(s) {
    let ans = [];
    for(let i = 0 ; i<s.length ; i++){
        if(s[i]!=ans[ans.length - 1])
            ans.push(s[i]);
        else
            ans.pop();
    }
    return ans.join("");
    
};