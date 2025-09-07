#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    int n; //십진법 수 
    int b;
    cin >> n >> b;
    string ans = "";
    while (n > 0){
        int num = n % b;
        if(num >= 10){
            char a = num + 55;
            ans.push_back(a);
        }else{
            ans.push_back('0' + num);
        }
        n /= b;
    }
    reverse(ans.begin(), ans.end()); // 거꾸로 뒤집기
    cout << ans;
    return 0;
}

