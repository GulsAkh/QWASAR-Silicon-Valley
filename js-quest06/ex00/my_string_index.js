function my_string_index(haystack, needle) {

    for (i = 0; i < haystack.length; i++) {
         if (haystack[i] == needle) {
             return i;
         }  
    }
     return -1;

}

//console.log(my_string_index("hello", "l"));
