// Girilen bir say�n�n tek veya �ift oludu�unu bulan program
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
	int n;
	cout << "bir tam say� giriniz :"; cin >> n;
	
	if(n%2==0)
	   cout << n << " say�s� �ifttir.\n";
	else 
	   cout << n << " say�s� tektir. \n";
	return 0;
}
