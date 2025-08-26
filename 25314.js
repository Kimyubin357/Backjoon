const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split(' ')

let n = Number(input[0])

n /= 4
let result = ""
for(let i = 0; i < n; i++){
    result += 'long '
}
result += 'int'

console.log(result)