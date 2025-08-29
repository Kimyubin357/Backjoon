const fs = require('fs')

let input = fs.readFileSync('example.txt').toString().trim().split('\n')
let first_line = input[0].split(' ').map(Number)

let n = first_line[0]
let m = first_line[1]
let arr = new Array(n)
arr = 0
console.log(arr)
for(let i = 1; i < input.length; i++){
    let user_input = input[i].split(' ').map(Number)
    for(let j = user_input[0]; j < user_input[1]; j++){
        arr[j] = user_input[2]
    }
}
