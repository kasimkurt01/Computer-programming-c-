// �oklu i�lemler
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int hg;
	setlocale(LC_ALL,"TURKISH");
	cout << " bug�n haftan�n ka��nc� g�n� :";cin>> hg;
	hg=hg%7;
	switch (hg){
	  case 	1: cout <<" Pazar\n"; break;
	  case 	2: cout <<" Pazartesi\n"; break;
	  case 	3: cout <<" Sal�\n"; break;
	  case 	4: cout <<" �ar�amba\n"; break;
	  case 	5: cout <<" Per�embe\n";break;
	  case 	6: cout <<" Cuma\n";break;
		
		default: cout <<" Cumartesi"; break;
	}
	return 0;
}
