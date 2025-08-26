const fs = require('fs')

let input = fs.readFileSync('example.txt').toString().trim().split('\n')

let n = Number(input[0])
let arr = []
let item = input[1].split(' ').map(Number)
let found = Number(input[2])
for(let i = 0; i < n; i++){
    arr.push(item[i])
}
let cnt = 0
for(let j = 0; j < n; j++){
    if(item[j]===found)
        cnt++
}
console.log(cnt)