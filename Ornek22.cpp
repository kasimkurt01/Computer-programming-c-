#include<iostream>
#include<iomanip>
using namespace std;
int fktrly(int n){
	if (n==0) return 1;
	return n*fktrly(n-1);
}
float Us(float x, int y){
	if (y==0) return 1;
	return x*Us(x,y-1);
}
int main(){
	int x,y;
	setlocale(LC_ALL,"TURKISH");
	cout << "\n Fakt�riyeli al�nacak say�y� giriniz :"; cin >> x;
	cout << x << " Fakt�riyel = " << fktrly(x)<< endl;
	cout << "\nUs� al�nacak say�y� giriniz x  y olarak:"; cin >> x>>y;
	cout << x << "^5 nici kuvveti = " << Us(x,y)<< endl;
}
