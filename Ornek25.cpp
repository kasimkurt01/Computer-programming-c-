// Dizilerdeki eleman sayýsý
#include<iostream>
#include<iomanip>
using namespace std;
char a[10]={'a','a','b','d','c','d','e','a','c','b'};
int esay[5]={0,0,0,0,0};
char etip[5]={'a','b','c','d','e'};
int main(){
	int i;
	setlocale(LC_ALL,"TURKISH");
	for(i=0;i<10;i++) {
		cout << setw(5)<< i+1 ;	
		
	}
	cout << "\n";
	for(i=0;i<10;i++) cout << setw(5)<< a[i] ;
	
	for(i=0;i<10;i++){
		switch (a[i]) {
		    case 'a' : esay[0]++;break;
		    case 'b' : esay[1]++;break;
		    case 'c' : esay[2]++;break;
		    case 'd' : esay[3]++;break;
		    case 'e' : esay[4]++;break;
			
		}
	}
	
	for (i=0;i<5;i++) {
		cout <<"\n" << setw(5)<< etip[i] << " Elemanýndan " << esay[i] << " tane vardýr.";
	}
	return 0;
}
