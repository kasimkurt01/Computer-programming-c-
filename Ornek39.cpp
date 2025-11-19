#include<iostream>
using namespace std;

int main(){
	double x=5.4;
	double y=11.8;
	double z=3.5;
	double *p= &z;
	setlocale(LC_ALL,"TURKISH");
	cout << "Adres ="
	     << p 
		 << " "
		 << "Deðeri =" 
		 << *p
		 << "\n";
		 p+=1;
		 cout << "Adres ="
	     << p 
		 << " "
		 << "Deðeri =" 
		 << *p
		 << "\n";
		 p++;
		 cout << "Adres ="
	     << p 
		 << " "
		 << "Deðeri =" 
		 << *p
		 << "\n";
		 
}
