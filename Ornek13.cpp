// Ko�ullu i�lemci
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
	char a; int i;
	cout << "kalan s�f�r ise '�', kalan bir ise 'T' Yaz :\n";
	for (i=0;i<10;i++) {
		a=(i%2) ? 'T':'�';
		cout << i << "say�s� "<< a <<endl;;
	}
	
	return 0;
	
}
