const fs = require('fs')

let input = fs.readFileSync('example.txt').toString().trim().split('\n')

let first_line = input[0].split(' ').map(Number)

let n = first_line[0]
let found = first_line[1]

let item = input[1].split(' ').map(Number)

let arr = []
for(let i = 0; i < n; i++){
    arr.push(item[i])
}
let result = ''
for(let j = 0; j < n; j++){
    if(item[j] < found){
        result += item[j] + ' '
    }
}
console.log(result)
