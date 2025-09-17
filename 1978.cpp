#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int n;
    
    int total_cnt = 0;
    cin >> n;
    int arr[100];
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        int yack = arr[i];
        int cnt = 0;
        while (yack > 0){
            if(arr[i] % yack == 0){
                cnt++;
            } 
            yack--;
        }
        if(cnt == 2){
            total_cnt++;
        }
    }
    cout << total_cnt;
    return 0;
}

