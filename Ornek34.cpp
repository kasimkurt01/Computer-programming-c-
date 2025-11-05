// Matris Çarpýmý
#include<iostream>
#include<iomanip>
#include "Ekran.h"
    int a[3][3]={1,-1,3,1,2,1,-4,5,-1};
	int b[3][3]={1,2,-1,3,-2,1,1,2,-1};
    int c[3][3]={0};
    
void MatrisCarp(int a[][],int b[][], int c[][]){
	
	int i,j,k;
    //Çarpma Ýþmeli baþlama
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		for(k=0;k<3;k++){
    			c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	//Çarpma iþlemi sonu
	
}
void MatrisYaz()   
int main(){
//	setlocale(LC_ALL,"TURKISH");
   	
    MatrisCarp(a[3][3],b[3][3],c[3][3]);
	//Çarpma iþlemi sonu
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
	
	gotoXY(x+13,y-2); cout <<"x";
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
   
	x=34, y=1;
	gotoXY(x,y); cout << char(218); 
	gotoXY(x+11,y); cout << char(191); 
	y++; 
	
	for(int i=0;i<3;i++) {
		gotoXY(x,y) ; cout << char(179); 
		for(int j=0;j<3;j++) 
		 cout << setw(3)<<c[i][j] ;gotoXY(x+11,y) ; cout << char(179);
		 y++;
	}	
	gotoXY(x,y); cout <<char(192); gotoXY(x+11,y); cout <<char(217);
	
}
     
