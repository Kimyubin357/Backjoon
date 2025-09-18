#include <iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int cnt = 2;
    while(n / cnt >= 1){
        if(n % cnt != 0){
            cnt++;
        }else if(n % cnt == 0){
            n /= cnt;
            cout << cnt << '\n';
        }
    }
    
    return 0;
}

