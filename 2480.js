//주사위 3개 입력 받고 같은 수의 개수만큼 상금을 주는 문제
const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split(' ').map(Number);

let one = input[0]
let two = input[1]
let three = input[2]
let cnt = 0
let same_num = 0
if(one === two && one === three && two === three){
    cnt += 3
    same_num = one
}else if(one === two || one === three){
    cnt += 2
    same_num = one
}else if(two === three){
    cnt += 2
    same_num = two
}
let max = one
if(two >= max){
    max = two
}
if(three >= max){
    max = three
}
let result = 0
if(cnt === 3){
    result += 10000 + (same_num * 1000)
}else if(cnt === 2){
    result += 1000 + (same_num * 100)
}else{
    result += max * 100
}
console.log(result)
