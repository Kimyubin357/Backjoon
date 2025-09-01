#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(void){
    string str1, str2;
    cin >> str1 >> str2;//입력을 받는다

    //숫자를 거꾸로 뒤집는다
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());

    int a = stoi(str1);
    int b = stoi(str2);
    //거꾸로 뒤집은 숫자를 비교해서 큰 수를 저장한다

    //저장한 큰 수를 출력한다.
    if(str1 > str2){
        cout << str1;
    }else{
        cout << str2;
    }
    
}