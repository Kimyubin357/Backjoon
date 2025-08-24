const fs = require('fs')

let input = fs.readFileSync('example.txt').toString().trim().split('\n')

let a = input[0]
let b = input[1].split('').map(Number)

console.log(a * b[2])
console.log(a * b[1])
console.log(a * b[0])

console.log((a * b[2]) + (a * b[1] * 10) + (a * b[0] * 100))


