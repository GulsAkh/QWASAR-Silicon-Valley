function my_count_on_it(arr_str) {

let arr_str1 = [];

for (i = 0; i < arr_str.length; i++) {
    arr_str1[arr_str1.length] = arr_str[i].length
}
return arr_str1;
}

//console.log(my_count_on_it(["This", "is", "the", "way"]));