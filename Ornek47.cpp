#include<iostream>
#include<iomanip>
using namespace std;
float const PI=3.14157;
float hesapla(float r){
	return r*r*PI;
}
float hesapla(float a, float b){
	return a*b;
}
float hesapla(float a,float b, float c){
	return a*b*c;
}

int main(){
	setlocale(LC_ALL,"TURKISH");
	cout << "Dairenin alaný :" << hesapla(6) << endl;
	cout << "Dikdörtgenin alaný :" << hesapla(4,7) << endl;
	cout << "Dikdörgen yapýnýn hacmi :" << hesapla(3,4,5) << endl;
}
