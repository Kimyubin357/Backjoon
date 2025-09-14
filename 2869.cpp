#include <iostream>
using namespace std;

int main(void){
    int A; //낮에 올라가는 미터
    int B; //밤에 미끄러지는 미터
    int V; //정상까지 높이

    cin >> A >> B >> V;
    int day = (V - A) / (A - B);
    if((V - A) % (A - B) != 0) day++;
    day += 1;
    cout << day;
    return 0;
}

