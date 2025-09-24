#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURHISH");
	const char st[15] = "KasimkurtFizi\0";
	cout << "\n Karakter dizisi ="<< st << endl;
	char* kGos = const_cast<char*> (st);
	for(int i = 0; i<15;i++)
	cout << "Karakter = "<< kGos[i] << endl;
	return 0;
}
