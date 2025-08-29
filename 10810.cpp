#include <iostream>
using namespace std;

int main(void){
    int n = 0; // 바구니 개수
    int m = 0; // 공을 바꿀 횟수
    
    cin >> n >> m;
    
    int* arr = new int[n](); // 배열 0으로 초기화

    for(int z = 0; z < m ; z++){//공 넣는 횟수만큼 입력 받는 부분
        int i, j, k;
        cin >> i >> j >> k; // 2 5 6이면 2번부터 5번까지 6을 넣어라
        for(int v = i - 1; v < j ; v++){//입력을 받고 공을 넣어주는 부분
            arr[v] = k;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}