#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	int n;
	double x;
	cin >> n >> x;
	double First = 1.0*log10(x)/log10(2);
	double Second = 1.0*exp(n);
	double Result1 = 1.0*fabs(First + Second + 2021);
	double Result2 = 2021;
	if(n % 2 == 0){
	    cout << fixed << setprecision(4) << Result1;
    }else{
    	int j = 1;
    	for(int i = 1; i <= 2*n - 1; i += 2){
    			Result2 += i/pow(x, j);
    			j++;
			}
		}
		cout <<fixed << setprecision(4) << Result2;	

	return 0;
}
