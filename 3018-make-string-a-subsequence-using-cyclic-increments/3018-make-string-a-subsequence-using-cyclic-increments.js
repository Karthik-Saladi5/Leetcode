/**
 * @param {string} str1
 * @param {string} str2
 * @return {boolean}
 */
var canMakeSubsequence = function(str1, str2) {
    let j=0;
    const n=str2.length;
    for(let ch of str1){
        if(j<n && ((str2.charCodeAt(j)-ch.charCodeAt(0)+26)%26<=1)) j++;
    }
    return j==n;
};