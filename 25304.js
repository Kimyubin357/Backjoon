const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split('\n')

let total_price = Number(input[0])
let cnt = Number(input[1])
let sum = 0
for(let i = 2; i < input.length; i++){
    let user_input = input[i].split(' ').map(Number)
    let price = user_input[0]
    let cnt = user_input[1]
    sum += price * cnt
}
if(sum === total_price){
    console.log('Yes')
}else{
    console.log('No')
}