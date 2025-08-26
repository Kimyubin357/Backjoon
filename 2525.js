//oven 문제
const fs = require('fs');
let input = fs.readFileSync('example.txt').toString().trim().split('\n');

let oven = input[0].split(' ').map(Number)
let hour = oven[0]//시작 시간
let minute = oven[1]//시작 분
let add_time = Number(input[1])//요리 시간

minute +=add_time;
while(minute >= 60){
    hour += Math.floor(minute / 60)
    minute %= 60
    hour %= 24
}
console.log(hour+" "+minute)