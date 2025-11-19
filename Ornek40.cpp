#include<iostream>
using namespace std;

int main(){
 int dizi[5]={12,15,3,7,9}	;
	setlocale(LC_ALL,"TURKISH");
	int *eleman=&dizi[0];
	int i;
	for (i=0;i<5;i++)
	  cout << dizi[i] << " " ;
	cout << "\n";  
	for (i=0;i<5;i++)
	  cout << *(dizi+i) << " " ;
	for (i=0;i<5;i++)
	cout << "\n"<< eleman+i;
	for (i=0;i<5;i++)
	cout << "\n"<< *eleman+i;
	cout <<"\n";
		for (i=0;i<5;i++) {
			cout << eleman << "adresteki deðer  = "<<*eleman << "\n";
			eleman++;
		};
	return 0;
}
