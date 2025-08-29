#include <iostream>
using namespace std;

int main(void){
    int n = 0; // 바구니 개수
    int m = 0; // 공을 바꿀 횟수
    
    cin >> n >> m;

    int* arr = new int[n];

    for(int z = 1; z <= n; z++){//처음 바구니와 같은 번호의 공으로 초기화
        arr[z - 1] = z;
    }
    for(int z = 0; z < m ; z++){//공 넣는 횟수만큼 입력 받는 부분
        int i, j;
        cin >> i >> j; // 2 5 6이면 2번부터 5번까지 6을 넣어라
        int temp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = temp; 
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}