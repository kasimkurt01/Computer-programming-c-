#include<iostream>
using namespace std;
const float PI=3.14;
int main(){
	int r;
	float c;
	float a;
	setlocale(LC_ALL,"TURKISH");
	cout <<"�evresini hesaplayaca��n�z dairenin yar� �ap�n� giriniz :";
	cin >> r;
	c=2*PI*r;
	cout << "\nDairenin �evresi :" << c <<" d�r\n";
	
	a=PI*r*r;
	cout << "\nDairenin Alan� :" << a <<" d�r\n";
	return 0;
}
