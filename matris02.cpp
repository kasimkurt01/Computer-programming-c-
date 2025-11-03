#include<iostream>
#include<iomanip>
#include "Ekran.h"

int main(){
//	setlocale(LC_ALL,"TURKISH");
   int a[3][3]={1,-1,3,1,2,1,-4,5,-1};
    int b[3][3]={1,2,-1,3,-2,1,1,2,-1};
     int c[3][3]={0};
   int x=4, y=1;
	
	gotoXY(x,y); cout << char(218); 
	gotoXY(x+11,y); cout << char(191); 
	y++;
	for(int i=0;i<3;i++) {
		gotoXY(x,y) ; cout << char(179); 
		for(int j=0;j<3;j++) 
		 cout << setw(3)<<a[i][j] ;gotoXY(x+11,y) ; cout << char(179);
		 y++;
	}	
	gotoXY(x,y); cout <<char(192); gotoXY(x+11,y); cout <<char(217);
	
	gotoXY(x+13,y-2); cout <<"+";
	x=19, y=1;
	gotoXY(x,y); cout << char(218); 
	gotoXY(x+11,y); cout << char(191); 
	y++;
	for(int i=0;i<3;i++) {
		gotoXY(x,y) ; cout << char(179); 
		for(int j=0;j<3;j++) 
		 cout << setw(3)<<b[i][j] ;gotoXY(x+11,y) ; cout << char(179);
		 y++;
	}	
	gotoXY(x,y); cout <<char(192); gotoXY(x+11,y); cout <<char(217);

   gotoXY(x+13,y-2); cout <<"=";
   
	x=33, y=1;
	gotoXY(x,y); cout << char(218); 
	gotoXY(x+11,y); cout << char(191); 
	y++; 
	
	//toplama
	for(int i=0;i<3;i++) {		
		for(int j=0;j<3;j++) 
		 c[i][j]= a[i][j]+b[i][j];
	}	
	
	for(int i=0;i<3;i++) {
		gotoXY(x,y) ; cout << char(179); 
		for(int j=0;j<3;j++) 
		 cout << setw(3)<<c[i][j] ;gotoXY(x+11,y) ; cout << char(179);
		 y++;
	}	
	gotoXY(x,y); cout <<char(192); gotoXY(x+11,y); cout <<char(217);
	
	
}