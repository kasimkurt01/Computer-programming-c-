// Dizilerdeki eleman sayýsý
#include<iostream>
#include<iomanip>
using namespace std;
int a[20]={1,5,3,2,0,3,2,4,2,1,5,2,3,2,3,4,3,5,2,0};
int esay[6]={0,0,0,0,0,0};

int main(){
	int i,j;
	setlocale(LC_ALL,"TURKISH");
	for(i=0;i<20;i++) {
		cout << setw(5)<< i+1 ;	
		
	}
	cout << "\n";
	for(i=0;i<20;i++) cout << setw(5)<< a[i] ;
	
	for(i=0;i<20;i++) esay[a[i]]++;
	
	for (i=0;i<6;i++) {
		cout <<"\n" << setw(5)<< i << " Elemanýndan " << esay[i] << " tane vardýr.";
	}
	cout << endl;
	for(i=0;i<6;i++){
		for(j=0;j<esay[i];j++) cout << "*";
	cout << endl;
	}
	
	return 0;
}
