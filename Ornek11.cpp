#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    setlocale(LC_ALL,"TURKISH");
    float a,b,c,d,x1,x2;
    cout << "ikinci derece denklemin koklerini sýrayla giriniz a,b,c ";
    cin >> a >> b>> c;
    d=pow(b,2)-4*a*c;
    // karþýlaþtýrma yapalým (if(d<0) iþlem)
    if (d<0) {
    	cout <<"Kökler Sanal\n";
    	exit(0);    	
	} 
    if(d==0){ 
    cout<< "Kökler çakýþýk\n";
    x1=-b/(2*a);
    cout << "\nx = " << x1<< "dir\n";
    exit(0);
	}
	else {
	cout<< "iki Kök var\n";
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    cout << "\nx1 = " << x1<< "dir\n";
	cout << "\nx2 = " << x2<< "dir\n";	
	}
    return 0;
}
