#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    int rnd = 0;
    int bigyo = 1;
    int num;
    cin >> num;

    
    while (num > bigyo){
        rnd++;
        bigyo += rnd * 6;
        
    }
    cout << (rnd + 1);


    
}

