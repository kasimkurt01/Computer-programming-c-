#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    setlocale(LC_ALL,"TURHISH");
	cout.setf(ios_base::fixed, ios_base::floatfield); // int tipini float dönüþtür
	float t=2;
		
	cout <<"\n t degiskeni = "<< t<< endl;
	int f=4.34556F;
	cout <<"\n f degiskeni = "<< f<< endl;
	float u= 7.2e12;
	cout <<"\n u degiskeni = "<< u<< endl;

	return 0;
}
