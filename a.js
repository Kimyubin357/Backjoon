const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

rl.on('line', (answer)=> {
    answer = answer.split(' ').map(Number);
    let A = answer[0];
    let B = answer[1];
    let C = answer[2];

    console.log((A+B)%C);
    console.log(((A%C) + (B%C))%C);
    console.log((A*B)%C);
    console.log(((A%C) * (B%C))%C);
   
    rl.close();
})