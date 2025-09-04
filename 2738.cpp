#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a[100][100];
	
	int n, m;
	cin >> n >> m;
	
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				cin >> a[j][k];
			}
		}
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				int temp;
				cin >> temp;
				a[j][k] += temp;
			}
		}
	
	for(int j = 0; j < n; j++){
		for(int k = 0; k < m; k++){
			cout << a[j][k] << " ";
		}
		cout << endl;
	}
	
	return 0;
}	
