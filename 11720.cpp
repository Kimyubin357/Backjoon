#include <iostream>
#include <string>
using namespace std;


int main(void){
    int test_case;
    cin >> test_case;
    string str;
    cin >> str;
    int sum = 0;
    for(int i = 0; i < test_case; i++){
        sum += stoi(str.substr(i,1));
    }
    cout << sum;
}