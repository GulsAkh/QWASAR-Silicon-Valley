function my_array_uniq(arr) {
var arr1 = [];
//var arr2 = [];
    for (var i = 0; i < arr.length; i++) {  
            for (var j = 0; j < arr.length; j++ ) {
                if (arr[j] > arr[j+1]) {
                let temp = arr[j] 
                arr[j] = arr[j+1]
                arr[j+1] = temp  
                }    
            }  
    }
    for (var k = 0; k < arr.length; k++) {
        if (arr[k] !== arr[k+1]) {
            arr1[arr1.length] = arr[k];
        } 
    }
     return arr1;
    }
    //console.log(my_array_uniq([1, 1, 1, 2, 3, 4, 1]));