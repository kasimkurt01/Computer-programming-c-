#include<iostream>
using namespace std;

int main(){
	int a,b;
	int c;
	a=11;
	b=6;
	c=a+b;
	setlocale(LC_ALL,"TURKISH");
	cout << a << "\t+"<< b << "=\t"<<c<<"\n";
	cout << a << "+"<< b 
	<< "="<<c<<"\n ��karma i�lemi \n" ;
	
	c=a-b;
	cout << a << "\t-"<< b << "=\t"<<c<<"\n";
	cout << a << "-"<< b << "="<<c<<"\n �arpma i�lemi \n"  ;
	c=a*b;
	cout << a << "\tx"<< b << "=\t"<<c<<"\n";
	cout << a << "x"<< b << "="<<c<<"\n B�lme i�lemi \n"  ;
	
	c=a/b;
	cout << a << "\t/"<< b << "=\t"<<c<<"\n";
	cout << a << "/"<< b << "="<<c<<"\n "  ;
	cout << "b+=a i�leminden �nce b nin de�eri "<<b <<"\n";
	b+=a;
	cout << "b+=a i�leminden sonra b nin de�eri "<<b<<"\n" ;
	
	
	cout << "b-=a i�leminden �nce b nin de�eri "<<b <<"\n";
	b-=a;
	cout << "b-=a i�leminden sonra b nin de�eri "<<b <<"\n";
	
	return 0;
}
