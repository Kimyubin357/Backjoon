#include <iostream>
#include <string>

using namespace std;

int main(void){
    int array[9][9] ={0};
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> array[i][j];
        }
    }
    int max = array[0][0];
    int row, colmn;
    for(int i = 0; i < 9 ; i++){
        for(int j = 0; j < 9; j++){
            if(array[i][j] >= max){
                max = array[i][j];
                row = i;
                colmn = j;
            }
        }
    }
    cout << max << endl << row + 1<< " " << colmn + 1;
    return 0;
}