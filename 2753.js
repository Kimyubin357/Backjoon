const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split(' ')

let a = Number(input[0]);

if(a % 4 === 0 && (a % 100 !== 0 || a % 400 === 0)){
    console.log("1");
}else{
    console.log("0");
}