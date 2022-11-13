/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    // return s.split(" ").filter((word) =>word !== '').reverse().join(" ")
    const x = s.split(" ");
    return x.filter((word)=> word!=='').reverse().join(" ");
    
};