#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    
    int a, b;
    vector<int> v;
    cin >> a >> b;
    int cnt = 1;
    while(a + 1 != cnt){
        if(a % cnt == 0){
            v.push_back(cnt);
        }
        cnt++;
    }
    if(b > v.size()){
        cout << 0;
    }else{
        cout << v.at(b-1);
    }
    
    return 0;
}

