// Girilen bir sayýnýn tek veya çift oluduðunu bulan program
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
	int n;
	cout << "bir tam sayý giriniz :"; cin >> n;
	
	if(n%2==0)
	   cout << n << " sayýsý çifttir.\n";
	else 
	   cout << n << " sayýsý tektir. \n";
	return 0;
}
