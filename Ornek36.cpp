#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a=500;
	setlocale(LC_ALL,"TURKISH");
	cout << "Deðeri :" << a << endl;
	cout << "Adesi :" << &a << endl;
	return 0;
}
