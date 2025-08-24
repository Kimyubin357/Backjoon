const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split(' ').map(Number);

let hour = input[0];
let minute = input[1];

if(minute - 45 < 0){
    hour -= 1;
    minute = 60 + (minute - 45);
    if(hour < 0){
        hour = 23;
    }
    console.log(hour + " " + minute);
}else{
    console.log(hour + " " + (minute - 45));
}
