// do, while döngüsü
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
//iki aralýk arasýndaki sayýlarýn toplamý

	int t=0,i, n=10;
	setlocale(LC_ALL,"TURKISH");
	i=0;
	while(i<=n) {
		t+=i;
		i++;
	}
	i=0;
	cout << i << " ile " << n 
	    << " arasýndaki sayýlarýn toplamý = "<< t << endl;
	
	t=0; i=1;
	do{
		t+=i;
		i+=2;
	}while(i<=n);
	
	i=0;
	cout << i << " ile " << n 
	    << " arasýndaki tek sayýlarýn toplamý = "<< t << endl;
	
	return 0;
}
