// Dizilerdeki eleman say�s�
#include<iostream>
#include<iomanip>
using namespace std;
int a[20]={1,5,3,2,0,3,11,4,2,1,5,2,3,2,3,4,3,5,2,0};


int main(){
	int i,j,emax,emin;
	setlocale(LC_ALL,"TURKISH");
	for(i=0;i<20;i++) {
		cout << setw(5)<< i+1 ;	
		
	}
	cout << "\n";
	for(i=0;i<20;i++) cout << setw(5)<< a[i] ;
	
	emax=a[0];
	for(i=0;i<20;i++)
	if(emax < a[i]) emax=a[i];
	cout << "\nDizinin en b�y�k eleman� : " <<emax << endl;
	emin=a[0];
	for(i=0;i<20;i++)
	if(emin > a[i]) emin=a[i];
	cout << "\nDizinin en k���k eleman� : " <<emin << endl;
	return 0;
}
	
