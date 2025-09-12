#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    int line = 2;//초기 한줄의 2개
    int n;
    cin >> n;
    while (n--) line = line * 2 - 1; // 한줄의 2개를 곱해서 1개를 뺌
    cout << line * line;//두개의 값을 곱하는 것은 반복 횟수가 올라가면 줄과 점이 같은 갯수로 늘어나서
}

