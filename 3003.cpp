#include <iostream>

using namespace std;


int main(void){
    int king, queen, look, bishop, knight, pon;
    cin >> king >> queen >> look >> bishop >> knight >> pon;
    king = 1 - king;
    queen = 1 - queen;
    look = 2 - look;
    bishop = 2 - bishop;
    knight = 2 - knight;
    pon = 8 - pon;
    cout << king << " " << queen << " " << look << " " << bishop << " " << knight << " " << pon;
}