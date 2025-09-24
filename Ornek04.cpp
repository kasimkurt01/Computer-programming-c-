#include<iostream>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"TURKISH");
	cout << "bool = "<< sizeof(bool) << " byte. \n";
	cout << "int = "<< sizeof(int) << " byte. \n";
	cout << "float = "<< sizeof(float) << " byte. \n";
	cout << "double = "<< sizeof(double) << " byte. \n";
	
	return 0;
}
