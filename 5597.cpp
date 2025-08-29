#include <iostream>
using namespace std;

int main(void){
    int arr[30];
    int found = 0;
    int min_max_arr[2];
    for(int i = 1; i <= 30; i++){//배열 초기화
        arr[i - 1] = i; 
    }
    for(int i = 0; i < 28 ; i++){//입력을 받고 초기화 된 배열에 있으면 0으로 바꿈
        cin >> found;
        for(int j = 0; j < 30; j++){
            if(arr[j] == found){
                arr[j] = 0;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < 30; i++){
        if(arr[i] == 0){//0인 걸 재끼고 2개 배열에 차근 차근 넣음
            continue;
        }else{
            min_max_arr[cnt] = arr[i];
            cnt++;
        }
    }
    int min, max;
    if(min_max_arr[0] > min_max_arr[1]){
        min = min_max_arr[1];
        max = min_max_arr[0];
    }else{
        min = min_max_arr[0];
        max = min_max_arr[1];
    }
    cout << min << endl << max;
    //입력을 받으면 그 입력값의 인덱스를 제거
    //
}