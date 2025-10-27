// matrislerde Çýkartma
#include<iostream>
#include<iomanip>
#include "Ekran.h"
using namespace std;

int main(){
	float a[3][3]={1,2,3,3,1,2,0,1,-1},
		  b[3][3]={-1,0,1,2,1,-1,1,3,1},
		  c[3][3]={0};
		int i,j,x,y;
	x=1;y=1;
	// a matrisini ekrana yaz
	for(i=0;i<3;i++){		
		for(j=0;j<3;j++) {
			gotoXY(x,y);cout <<setw(3)<< a[i][j]<<" ";
			x+=3;
		}
		x=1;y+=1;
		cout<< endl;
	}
	x=17;y=1;
	// b matrisini ekrana yaz
	gotoXY(14,2);cout << "-";
	for(i=0;i<3;i++){		
		for(j=0;j<3;j++) {
			gotoXY(x,y);cout << setw(3)<<b[i][j]<<" ";
			x+=3;
		}
		x=17;y+=1;
		cout<< endl;
	}
	// iki matrsi çýkartma c matrisini oluþtur
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	c[i][j]=a[i][j]-b[i][j];
	// c matrisini ekrana yaz
gotoXY(29,2);cout << "=";
  x=31;y=1;
	for(i=0;i<3;i++){		
		for(j=0;j<3;j++) {
			gotoXY(x,y);cout << setw(3)<<c[i][j]<<" ";
			x+=3;
		}
		x=31;y+=1;
		cout<< endl;
	}
	return 0;
}
