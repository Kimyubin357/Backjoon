#include <iostream>
#include <string>
using namespace std;

int main(void){
    string str;
    cin >> str;

    for(int i = 97; i <= 122; i++){
        char alpha = (char) i;
        int index = str.find(alpha);
        if(index != string::npos){//쓰레기 값이 아니라면
            cout << index << " "; // 인덱스를 출력
        }else{
            cout << -1 << " ";
        }
    }
}