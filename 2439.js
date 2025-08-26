const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split(' ')

let n = Number(input[0])

for(let i = 1; i <= n; i++){//행 출력
    let result =''
    for(let j = 0; j < n - i; j++){
        result += " "
    }
    for(let j = n; j > n - i; j--){
        result += "*"
    }
    console.log(result)
}
