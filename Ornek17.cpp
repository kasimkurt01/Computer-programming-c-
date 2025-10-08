// while döngüsü ile faktöriyel
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	int n,m,f;
	char ch;
	do{	
	cout << "Faktöriyeli alýnacak sayýyý giriniz :"; 
	cin >> n;
	m=n;
	f=1;
	while(n>1){
		f*=n;
		n--;
	}
	cout << m <<"! = "<< f << "\n";
	cout << "Yeni bir iþlem için E/H "; cin>> ch;
    } while(ch=='e'|| ch == 'E') ;
	return 0;
	
}
