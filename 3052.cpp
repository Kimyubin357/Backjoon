#include <iostream>

using namespace std;

int main(void){
    int arr[10];
    for(int i = 0; i < 10; i++){//10개 입력을 받고
        cin >> arr[i];
        arr[i] %= 42;
    }

    for(int i = 0; i < 10; i++){
        int bigyo = arr[i];
        for(int j = 0; j < 10; j++){
            if(i == j){//자기 자신과 비교는 건너뛰기
                continue;
            }else{
                if(bigyo == arr[j]){
                    arr[j] = -1;
                }
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] != -1){
            cnt++;
        }
    }
    cout << cnt;
}