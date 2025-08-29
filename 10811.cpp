#include <iostream>
#include <algorithm>
using namespace std;


int main(void){
    int n;//바구니 개수
    int m;//역순으로 바꿀 횟수
    cin >> n >> m;
    int arr[100];
    for(int i = 0; i < n; i++){//바구니 초기화
        arr[i] = i + 1;
    }
    
    for(int i = 0; i < m; i++){//m번의 범위 입력
        int start, end;
        cin >> start >> end;
        start--;
        reverse(arr + start, arr + end);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}