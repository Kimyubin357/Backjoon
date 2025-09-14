#include <iostream>
using namespace std;

int main(void){

    int num;
    cin >> num;
    int cnt = 0;
    int level = 0;
    while (num > cnt){
        level++;
        cnt += level;
    }
    int left = 0, right = 0;
    if(level % 2 == 0){//짝수면
        left = 1;
        right = level;
        for(int i = 1; i < level - (cnt- num); i++){
            left++;
            right--;
        }
    }else{//홀수면
        left = level;
        right = 1;
        for(int i = 1; i < level - (cnt - num); i++){
            left--;
            right++;
        }
    }
    cout << left << '/' << right;
    return 0;
}

