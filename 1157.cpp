#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int arr[26] = {0};
	
	for(int i = 0; i < s.length(); i++){ // 입력받은 문자열에서 알파벳 별로 개수를 새기
		int n = (int) s[i];
		for(int j = 65; j <= 90; j++){
			if(n == j || n == (j + 32)){
				arr[j - 65] += 1;
			}
		}
	}
	
	int max = arr[0];
	char result = 0;
	for(int i = 0; i < 26; i++){
		if(arr[i] > max){
			max = arr[i];
			result = i;
		}else if(i != 0 && arr[i] == max){
			result = -1;
		}
	}
	if(result == -1){
		result += 64;
		cout << (char)result;
	}else{
		result += 65;
		cout << (char)result;
	}
	
	return 0;
}	
