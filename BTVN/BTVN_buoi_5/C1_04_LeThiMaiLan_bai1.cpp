#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int n;
	double x;
	cin >> n >> x;
	if (n % 2 == 0) {
		double a =  log(x) / log(2);
		double b = exp(n);
		double sum1 = fabs(a + b + 2021);
		cout << fixed << setprecision(4) << sum1;
	} else {
		double sum2 = 2021;
		for (int i = 1; i <= n; i++) {
			sum2 += (2*i-1) / pow(x,i);
		}
		cout << fixed << setprecision(4) << sum2;	
	}
	return 0;
}
