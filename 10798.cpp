#include <iostream>
#include <string>

using namespace std;

int main(void){

    char a[5][15] = {0};
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    string s;
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(a[j][i] == 0){
                continue;
            }else{
                s += a[j][i];
            }
        }
    }
    cout << s;
    return 0;
}