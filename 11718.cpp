#include <iostream>

using namespace std;

int main(void){
    string s;
    getline(cin, s);
    while(s != ""){
        cout << s << endl;
        getline(cin,s);
    }
    
    return 0;
}