#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int cnt = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == s[(s.length() - 1) - i]){//끝쌍을 비교한다
			cnt++;
		}
	}
	int pass = s.length();
	if(cnt >= pass){
		cout << 1;
	}else{
		cout << 0;
	}
}	
