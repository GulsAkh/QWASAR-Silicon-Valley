function my_spaceship(str) {
    let xAxis = 0;
    let yAxis = 0;
    let dir = 'up';

    for (i = 0; i < str.length; i++) {
        if (str[i] == 'A') {
            if (dir == 'up') {
                yAxis--;
                dir = 'up';
                }
            else if (dir == 'down') {
                yAxis++
                dir = 'down';
            }
            else if (dir == 'right') {
                xAxis++;
                dir = 'right';
            } else if (dir == 'left') {
                xAxis--;
                dir = 'left';
            }
        }
        else if (str[i] == 'R') {
               if (dir == 'right') {
                dir = 'down';
               }
               else if (dir == 'down') {
                dir = 'left';
            } else if (dir == 'left') {
                dir = 'up';
            } else if (dir == 'up') {
                dir = 'right';
            }
        }
        else if (str[i] == 'L') {
            if (dir == 'left') {
                dir = 'down';
               }
             else if (dir == 'down') {
                dir = 'right';
            } else if (dir == 'right') {
                dir = 'up';
            } else if (dir == 'up') {
                dir = 'left';
            }
        }
        }

           // res = "{x: "+x+ " , y : " +y+ " , direction : '"+dir+ "'}";
            return  `{x: ${xAxis}, y: ${yAxis}, direction: '${dir}'}`
            
    
    }
    
     