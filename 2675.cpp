#include <iostream>
#include <string>
using namespace std;

int main(void){
    int test_case;
    cin >> test_case;
    for(int i = 0; i < test_case; i++){
        int n; 
        string str;
        cin >> n >> str;
        for(int j = 0; j < str.length(); j++){
            char a = str[j];
            for(int z = 0; z < n; z++){
                cout << a;
            }
        }
        cout << endl;
    }
}