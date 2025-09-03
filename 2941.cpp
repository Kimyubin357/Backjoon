#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s;
	cin >> s;//문자열 입력을 받아
	string cro[8] = {"dz=", "c=", "c-", "d-", "lj", "nj", "s=" ,"z="};
	
	string add_s;
	int cnt = 0;
	for(int i = 0; i < s.length(); i++){
		add_s += s[i];//문자열에 하나씩 넣어
		
		for(int j = 0; j < 8; j++){
			int index = add_s.find(cro[j]);//문자열에서 크로아티아 문자를 찾은 곳에 첫번째 인덱스 반환
	
			if(index != -1){//찾으면
				add_s.replace(index, cro[j].length(), "_");
				break;
			}
		}
		
		
	}
	for(int i = 0; i < add_s.length(); i++){
		if(add_s[i] != NULL){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}	
