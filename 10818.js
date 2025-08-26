const fs = require('fs')

let input = fs.readFileSync('example.txt').toString().trim().split('\n')

let n = Number(input[0])

let item = input[1].split(' ').map(Number)
let max = item[0]
let min = item[0]
for(let i = 1; i < n; i++){
    if(item[i] >= max){
        max = item[i]
    }else if(item[i] <= min){
        min = item[i]
    }
}
console.log(min, max)
