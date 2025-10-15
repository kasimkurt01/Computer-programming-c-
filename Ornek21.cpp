// fonksiyonlar
#include<iostream>
#include<iomanip> 
using namespace std;
//  globa de�i�kenler burada tan�mlan�r.
void HGunu(int gun){
	int g; 
	g= gun%7;
	switch (g) {
		case 1: cout << "Pazar\n"; break;
		case 2: cout << "Pazartesi\n"; break;
		case 3: cout << "Sal�\n"; break;
		case 4: cout << "�ar�amba\n"; break;
		case 5: cout << "Per�embe\n"; break;
		case 6: cout << "Cuma\n"; break;
		case 0: cout << "Cumartesi" ; break;
	}
}
int AyG(int yil, int ay){
	int gsay=0;
	for(int i=1;i<ay;i++) 
	switch (i){
		case  1: gsay+=31;break;
		case  2: if(yil%4!=0)gsay+=28; else gsay+=29;break;
		case  3: gsay+=31;break;
		case  4: gsay+=30;break;
		case  5: gsay+=31;break;
		case  6: gsay+=30;break;
		case  7: gsay+=31;break;
		case  8: gsay+=31;break;
		case  9: gsay+=30;break;
		case 10: gsay+=31;break;
		case 11: gsay+=30;break;
		case 12: gsay+=31;break;
 			
	}
	return gsay;
}
int YilG(int yil){	
	return (yil-1)*365+(yil-1)/4;
}
int GunS(int y, int a, int g){
	return YilG(y)+AyG(y,a)+g;
	
}

int main(){
	
	setlocale(LC_ALL, "TURKISH");
int byil,bay, bgun;
int dyil,day, dgun;
 cout << "Bugunun Tarihini g�n Ay y�l olarak Giriniz :"; 
 cin >> bgun >> bay>> byil;
 cout << "Do�um G�n�n�n Tarihini g�n Ay y�l olarak Giriniz :"; 
 cin >> dgun >> day>> dyil;
 int BGunSay, DGunSay;
 
 BGunSay=GunS(byil,bay,bgun); // g�n say�s�n� hesaplayan fonksyon
 DGunSay=GunS(dyil,day,dgun); // g�n say�s�n� hesaplayan fonksyon
 HGunu(DGunSay); 
 cout << "G�n� do�mu� olup "
      << BGunSay-DGunSay << " g�n ya�am��s�n\n" ;  // haftan�n g�n�n� yazan fonksiyon

return 0;
}


