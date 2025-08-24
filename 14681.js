//4분면
const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split('\n').map(Number);

let a = input[0];
let b = input[1];

if(a > 0 && b > 0){
    console.log("1");
}else if(a < 0 && b > 0){
    console.log("2");
}else if(a < 0 && b < 0){
    console.log("3");
}else{
    console.log("4");
}

