#include <iostream>
#include <string>

using namespace std;

int main(void){
    int n;//입력받을 횟수
    cin >> n;
    
    string s[100];
    char candidate[100] = {0};
    int total_cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i];//첫번째 입력을 받는다 year
        int cnt = 0;
        for(int j = 1; j <= s[i].length(); j++){
            if(s[i][j - 1] != s[i][j]){//전에 입력과 지금 입력이 다르면 y e를 비교한다
                candidate[cnt] = s[i][j - 1];//후보 배열에 저장한다
                cnt++;
            }
        }
        
        int same = 0;
        for(int j = 0; j < cnt; j++){//h
            for(int k = 0; k < cnt; k++){//a
                
                if(j==k){
                    continue;
                }else{
                    if(candidate[j]==candidate[k]){
                        same++;
                        continue;
                    }
                }
            }
        }
        if(same == 0){
            total_cnt++;
        }
    }
    cout << total_cnt;
}