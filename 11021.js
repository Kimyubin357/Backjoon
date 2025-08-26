const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split('\n')

let test_case_n = Number(input[0])
let result =''
for(let i = 1; i <= test_case_n; i++){
    let user_input = input[i].split(' ').map(Number)
    let A = user_input[0]
    let B = user_input[1]
    result +=  'Case #' + i+': '+ (A+B)  + '\n'
}
console.log(result)
