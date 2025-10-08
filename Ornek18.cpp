#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	int n,i,f;
	f=1;
	cout << "Faktöriyeli alýnacak sayýyý giriniz :"; 
	cin >> n;
	for(i=1;i<=n;i++) f*=i;
	cout << n <<"! = " << f <<"\n";
	return 0;
}
