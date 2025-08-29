#include <iostream>
using namespace std;


int main(void){
    int n;//시험 본 거 개수
    cin >> n;
    float score[1000];

    for(int i = 0; i < n; i++){
        cin >> score[i];
    }
    
    int max = score[0];
    for(int i = 0; i < n; i++){
        if(score[i] >= max){
            max = score[i];
        }
    }
    float sum = 0;
    for(int i = 0; i < n; i++){
        score[i] = (score[i] / max) * 100;
        sum += score[i];
    }
    cout << sum / n;
   
}