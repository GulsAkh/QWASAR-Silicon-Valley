function my_average_mark(obj) {

var num = 0;
var avr = 0;
var sum =0;
    for (let i=0; i < obj.length; i++) {  
       
            if (obj[i]["integer"] > 0) {
                num += obj[i]["integer"]
                avr++
                sum = num / avr
                
            }
    }
    return sum.toFixed(1)
}; 
//console.log(my_average_mark([]));
