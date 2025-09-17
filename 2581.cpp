#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sosu_find(int num){
    int n = 1;
    int cnt = 0;
    while(num >= n){
        if(num % n == 0){
            cnt++;
        }
        n++;
    }
    return cnt;
}
int main(void){
    int m, n;
    cin >> m >> n;
    int min = 10000;
    int sum = 0;
    while(m <= n){
        if(sosu_find(m) == 2){
            if(min >= m){
                min = m;
            }
        sum += m;
        }
        m++;
    }
    if(sum == 0){
        cout << -1;
    }else{
        cout << sum << endl << min;
    }
    
    return 0;
}

