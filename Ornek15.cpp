// for döngüsü
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
//iki aralýk arasýndaki sayýlarýn toplamý

	int t=0,i, n=10;
	setlocale(LC_ALL,"TURKISH");
	for(i=0;i<=n;i++) t=t+i; //t+=i;
	i=0;
	cout << i << " ile " << n 
	    << " arasýndaki sayýlarýn toplamý = "<< t << endl;
	t=0;
	for(i=1;i<=n; i+=2) t+=i;
	i=1;
	cout << i << " ile " << n 
	    << " arasýndaki tek sayýlarýn toplamý = "<< t << endl;
		t=0;
	for(i=0;i<=n; i+=2) t+=i;
	i=0;
	cout << i << " ile " << n 
	    << " arasýndaki çift sayýlarýn toplamý = "<< t << endl;
	return 0;
	
}
