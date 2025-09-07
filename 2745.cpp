#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    //입력 받는 것은 1부터 9 그리고 A ~ Z까지이다.
    string s;
    int n; // 진법 수
    cin >> s >> n;
    int ans = 0;
    int power = 0;
    for(int i = s.length() - 1; i >= 0 ; i--){
        int num = (int) s[i];
        if(num >= 48 && num <=57){//아스키 코드 값이 숫자일 때
            num -= 48;
        }else if(num >= 65 && num <= 90){//문자일 때
            num -= 55;
        }
        ans += num * pow(n, power);
        power++;
    }
    cout << ans;
    return 0;
}
