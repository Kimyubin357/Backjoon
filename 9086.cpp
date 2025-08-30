#include <iostream>
using namespace std;


int main(void){
    int test_case;
    cin >> test_case;
    for(int i = 0; i < test_case; i++){
        string str;
        cin >> str;
        int end_idx = str.length() - 1;
        cout << str[0] << str[end_idx] << endl;
    }
    return 0;
}