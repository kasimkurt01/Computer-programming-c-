#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    setlocale(LC_ALL,"TURKISH");
    float a,b,c,d,x1,x2;
    cout << "ikinci derece denklemin koklerini s�rayla giriniz a,b,c ";
    cin >> a >> b>> c;
    d=pow(b,2)-4*a*c;
    // kar��la�t�rma yapal�m (if(d<0) i�lem)
    if (d<0) {
    	cout <<"K�kler Sanal\n";
    	exit(0);    	
	} 
    if(d==0){ 
    cout<< "K�kler �ak���k\n";
    x1=-b/(2*a);
    cout << "\nx = " << x1<< "dir\n";
    exit(0);
	}
	else {
	cout<< "iki K�k var\n";
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    cout << "\nx1 = " << x1<< "dir\n";
	cout << "\nx2 = " << x2<< "dir\n";	
	}
    return 0;
}
