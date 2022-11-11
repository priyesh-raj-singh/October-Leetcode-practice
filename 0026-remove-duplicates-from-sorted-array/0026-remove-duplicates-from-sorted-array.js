/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let curr = 0;
    for(let i = 1 ; i<nums.length ; i++){
        if(nums[i]==nums[curr]) continue;
        curr++
        nums[curr] = nums[i];
    }
    return curr+1;
    
};