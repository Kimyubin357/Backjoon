#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    
    //자신을 제외한 약수들 리스트를 만들고
    //그것을 다 더해
    int n;
    cin >> n;
    while(n != -1){
        int cnt = 1;
        vector<int> v;
        while(n != cnt){
            if((n % cnt) == 0){
                v.push_back(cnt);
            }
            cnt++;    
        }
        int sum = 0;
        for_each(v.begin(), v.end(), [&](int& n){
            sum += n;
        });
        if(sum == n){
            cout << n << " = ";
            for(int i = 0; i < v.size(); i++){
                cout << v[i];
                if(i != v.size() - 1) cout << " + ";
            }
            cout << endl;
        }else{
            cout << n << " is NOT perfect." << endl;
        }
        cin >> n;
    }
    
    return 0;
}

