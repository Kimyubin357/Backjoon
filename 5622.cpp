#include <iostream>
#include <string>
using namespace std;


int main(void){
    string str;
    cin >> str;//문자열을 입력 받음
    int time = 0;
    for(int i = 0; i < str.length(); i++){
        int a = (int)str[i];
        
        if(a >= 65 && a <= 67){//2 ABC
            time += 3;
        }else if(a >= 68 && a <= 70){//3 DEF
            time += 4;
        }else if(a >= 71 && a <= 73){//4 GHI 
            time += 5;
        }else if(a >= 74 && a <= 76){//5 JKL
            time += 6;
        }else if(a >= 77 && a <= 79){//6 MNO
            time += 7;
        }else if(a >= 80 && a <= 83){//7 PQRS
            time += 8;
        }else if(a >= 84 && a <= 86){//8 TUV
            time += 9;
        }else if(a >= 87 && a <= 90){//9 WXYZ
            time += 10;
        }
    }
    cout << time;
}