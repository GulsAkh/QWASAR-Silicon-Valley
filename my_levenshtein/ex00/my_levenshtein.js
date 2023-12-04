function my_levenshtein(str1, str2) {
var num = 0;
if (str1.length !== str2.length) {
    return - 1
} else {
    for (i=0; i < str1.length; i++) {
        if (str1[i] != str2[i]) {
            num++
        } 
    }
    return num
}

}

//console.log(my_levenshtein("", ""));