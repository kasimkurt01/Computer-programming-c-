#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a=500;
	int *b;
	b=&a;
	setlocale(LC_ALL,"TURKISH");
	cout << " a Deðeri :" << a << endl;
	cout << "a Adesi :" << &a << endl;
	cout << " b Deðeri :" << b << endl;
	cout << "b Adesi :" << &b << endl;
	cout << "b Adesi deðer :" << *b << endl;
	return 0;
}
