const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split(' ')

let n = Number(input[0])

for(let i = 0;i < n; i++){
    let result = ''
    for(let j = 0; j <= i; j++){
        result+='*'
    }
    console.log(result)
}

