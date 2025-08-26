const fs = require('fs')

let input = fs.readFileSync('example.txt').toString().trim().split('\n').map(Number)
let max = input[0]

for(let i = 0; i < input.length; i++){
    if(input[i] >= max){
        max = input[i]
    }
}

for(let i = 0; i < input.length; i++){
    if(input[i] === max){
        console.log(input[i])
        console.log(i+1)
    }
}
