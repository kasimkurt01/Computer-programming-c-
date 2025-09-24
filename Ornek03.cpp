#include<iostream>
using namespace std;
const float PI=3.14;
int main(){
	int r;
	float c;
	float a;
	setlocale(LC_ALL,"TURKISH");
	cout <<"çevresini hesaplayacaðýnýz dairenin yarý çapýný giriniz :";
	cin >> r;
	c=2*PI*r;
	cout << "\nDairenin Çevresi :" << c <<" dýr\n";
	
	a=PI*r*r;
	cout << "\nDairenin Alaný :" << a <<" dýr\n";
	return 0;
}
