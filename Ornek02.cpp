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
	<< "="<<c<<"\n Çýkarma iþlemi \n" ;
	
	c=a-b;
	cout << a << "\t-"<< b << "=\t"<<c<<"\n";
	cout << a << "-"<< b << "="<<c<<"\n Çarpma iþlemi \n"  ;
	c=a*b;
	cout << a << "\tx"<< b << "=\t"<<c<<"\n";
	cout << a << "x"<< b << "="<<c<<"\n Bölme iþlemi \n"  ;
	
	c=a/b;
	cout << a << "\t/"<< b << "=\t"<<c<<"\n";
	cout << a << "/"<< b << "="<<c<<"\n "  ;
	cout << "b+=a iþleminden önce b nin deðeri "<<b <<"\n";
	b+=a;
	cout << "b+=a iþleminden sonra b nin deðeri "<<b<<"\n" ;
	
	
	cout << "b-=a iþleminden önce b nin deðeri "<<b <<"\n";
	b-=a;
	cout << "b-=a iþleminden sonra b nin deðeri "<<b <<"\n";
	
	return 0;
}
