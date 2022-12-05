#include <bits/stdc++.h>
using namespace std;
void nhapMang(int *a, int &n){
	do{
		cout<<"\nNhap n duong: "; cin>>n;
	}while(n<=0);
	for(int i=0; i<n; i++){
		cout<<"\nNhap A["<<i<<"]= ";
		cin>> *(a+i);
	}
}
void xuatMang(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<*(a+i)<<" ";
	}
}
int chanMax(int *a, int n){
	int max= a[0];
	for(int i=0; i<n; i++)
		if(*(a+i)%2==0 && *(a+i)>max)
		    max=*(a+i);
	return max;
}
void them(int *a, int &n, int vt,int x){
	for(int i=n; i>vt;i--)
	    *(a+i)=*(a+i-1);
	*(a+vt)= x;
	n++;
}
int main(){
	int *a;
	int n;
	a= (int*)malloc (n*sizeof(int));
	nhapMang(a,n);
	cout<<"\nMang vua nhap: ";
	xuatMang(a,n);
	if(chanMax(a,n)!=1) cout<<"Chan max= "<<chanMax(a,n);
	else{
		a= (int*)realloc(a, (n+1)*sizeof(int));
		cout<<endl;
		int x;
		cout<<"Nhap x: "; cin>>x;
		them(a,n,n,x);
		cout<<endl;
		xuatMang(a,n);
	}
}
