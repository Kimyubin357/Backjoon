#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    int test_case;
    cin >> test_case;
    int quarter = 25, dime = 10 , nickel = 5, penny = 1;
    
    for(int i = 0; i < test_case; i++){
        int num;
        cin >> num;
        int arr[4] ={0};
        arr[0] = num / quarter;
        num %= quarter;
        arr[1] = num / dime;
        num %= dime;
        arr[2] = num / nickel;
        num %= nickel;
        arr[3] = num / penny;
        num %= penny;
        for(int j = 0 ;j < 4; j++){
            cout << arr[j] << " ";
        }
        cout << '\n';
    }
}

