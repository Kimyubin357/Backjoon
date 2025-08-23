const fs = require('fs')

let input = fs.readFileSync('example.txt').toString().trim().split(' ').map(Number)

console.log(input[0]+input[1]+input[2])
