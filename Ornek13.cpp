// Koþullu iþlemci
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
	char a; int i;
	cout << "kalan sýfýr ise 'Ç', kalan bir ise 'T' Yaz :\n";
	for (i=0;i<10;i++) {
		a=(i%2) ? 'T':'Ç';
		cout << i << "sayýsý "<< a <<endl;;
	}
	
	return 0;
	
}
