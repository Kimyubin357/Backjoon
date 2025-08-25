const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split('\n')

let test_case = Number(input[0])
for(let i = 1; i <= test_case; i++){
    let user_input = input[i].split(' ').map(Number)
    console.log(user_input[0] + user_input[1])
}