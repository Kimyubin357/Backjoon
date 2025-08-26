const fs = require('fs')

let input = fs.readFileSync('example.txt').toString().trim().split('\n')
let result = ''
for(let i = 0; i < input.length; i++){
    let nums = input[i].split(' ').map(Number)
    let A = nums[0]
    let B = nums[1]
    result += A+B +'\n'
}
console.log(result)