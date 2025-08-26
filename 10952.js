const readline = require('readline')

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
})
let input
let result = ''
rl.on('line',(line)=>{
    input = line.split(' ').map((v)=>parseInt(v))
    const A = input[0]
    const B = input[1]
    
   if(A!==0 && B!==0){
        result += A + B +'\n'
   }else{
        rl.close()
   }
})
rl.on('close',()=>{
    console.log(result)
    process.exit()
})