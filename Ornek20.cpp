// fonksiyonlar
#include<iostream>
#include<iomanip> 
using namespace std;
//  globa deðiþkenler burada tanýmlanýr.
void HGunu(int gun){
	int g; 
	g= gun%7;
	switch (g) {
		case 1: cout << "Pazar\n"; break;
		case 2: cout << "Pazartesi\n"; break;
		case 3: cout << "Salý\n"; break;
		case 4: cout << "Çarþamba\n"; break;
		case 5: cout << "Perþembe\n"; break;
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
int yil,ay, gun, gs,hg, artg;
 yil =2025; ay=10;gun=13;
gs=GunS(yil,ay,gun);
/*
hg = gs % 7;
cout << "haftanýn gün sayýsý :" << hg << endl;
cout << "         gün sayýsý :" << gs << endl;
*/
HGunu(gs);

return 0;
}


