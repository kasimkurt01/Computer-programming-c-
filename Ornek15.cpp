// for d�ng�s�
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
//iki aral�k aras�ndaki say�lar�n toplam�

	int t=0,i, n=10;
	setlocale(LC_ALL,"TURKISH");
	for(i=0;i<=n;i++) t=t+i; //t+=i;
	i=0;
	cout << i << " ile " << n 
	    << " aras�ndaki say�lar�n toplam� = "<< t << endl;
	t=0;
	for(i=1;i<=n; i+=2) t+=i;
	i=1;
	cout << i << " ile " << n 
	    << " aras�ndaki tek say�lar�n toplam� = "<< t << endl;
		t=0;
	for(i=0;i<=n; i+=2) t+=i;
	i=0;
	cout << i << " ile " << n 
	    << " aras�ndaki �ift say�lar�n toplam� = "<< t << endl;
	return 0;
	
}
