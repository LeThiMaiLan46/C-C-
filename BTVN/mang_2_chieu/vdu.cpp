#include <iostream>

using namespace std;

int main() {
	int a[4][4] = {{1,3,4,3}, {1,2,4,7}, {8,5,8,3}, {4,7,3,2}};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		cout << i%4 << endl;
		sum += a[i%4][i%4];
	}
	cout << sum;
	return 0;
}
	
