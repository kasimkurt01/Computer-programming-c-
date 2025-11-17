// Matris Çarpýmý
#include<iostream>
#include<iomanip>
#include "Ekran.h"
    int a[3][3]={1,-1,3,1,2,1,-4,5,-1};
	int b[3][3]={1,2,-1,3,-2,1,1,2,-1};
    int c[3][3]={0};
    
void MatrisCarp(int a[3][3],int b[3][3], int c[3][3]){
	
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
void MatrisYaz(int a[3][3], int x1, int y1) {
	int x=x1, y=y1;
	
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
	
}  
void Yazi(int x, int y , char a){
	gotoXY(x+13,y+2); cout <<a;
}
int main(){
//	setlocale(LC_ALL,"TURKISH");
   	
    MatrisCarp(a,b,c);
	
	
	MatrisYaz(a,15,4);
	Yazi(15,4,'*');
	MatrisYaz(b,30,4);
	Yazi(30,4,'=');
	MatrisYaz(c,45,4);
	
	
}
     
