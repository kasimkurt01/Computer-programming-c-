// çoklu iþlemler
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int hg;
	setlocale(LC_ALL,"TURKISH");
	cout << " bugün haftanýn kaçýncý günü :";cin>> hg;
	hg=hg%7;
	switch (hg){
	  case 	1: cout <<" Pazar\n"; break;
	  case 	2: cout <<" Pazartesi\n"; break;
	  case 	3: cout <<" Salý\n"; break;
	  case 	4: cout <<" Çarþamba\n"; break;
	  case 	5: cout <<" Perþembe\n";break;
	  case 	6: cout <<" Cuma\n";break;
		
		default: cout <<" Cumartesi"; break;
	}
	return 0;
}
