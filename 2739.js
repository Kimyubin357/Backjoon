const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split(' ')

let n = Number(input[0])

for(let i = 1; i <= 9; i++){
    console.log(`${n} * ${i} = ${n * i}`)
}

