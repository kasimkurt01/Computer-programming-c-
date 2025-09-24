#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	cout << "float tipli saylar : \n\n";
	float a;
	cout.setf(ios::left, ios::adjustfield);
	cout.setf(ios::showpos);
	cout.setf(ios::showpoint);
	ios::fmtflags old=cout.setf(ios::scientific, ios::floatfield);
	for(int i =1 ; i<5; i++){
	//	cout.precision(i);
		cout << i << " bir tamsayi giriniz :"; cin>> a;
		cout << setw(40)<< i << "basamaklý sayý ="<< a<< endl;
	}
	
	return 0;
}
