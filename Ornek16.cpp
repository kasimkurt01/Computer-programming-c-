// do, while d�ng�s�
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
//iki aral�k aras�ndaki say�lar�n toplam�

	int t=0,i, n=10;
	setlocale(LC_ALL,"TURKISH");
	i=0;
	while(i<=n) {
		t+=i;
		i++;
	}
	i=0;
	cout << i << " ile " << n 
	    << " aras�ndaki say�lar�n toplam� = "<< t << endl;
	
	t=0; i=1;
	do{
		t+=i;
		i+=2;
	}while(i<=n);
	
	i=0;
	cout << i << " ile " << n 
	    << " aras�ndaki tek say�lar�n toplam� = "<< t << endl;
	
	return 0;
}
