// Dizi De�i�kenler
#include<iostream>
using namespace std;
int a[5]={9,5,3,6,1};

int main(){
	setlocale(LC_ALL,"TURKISH");
	int i,j,t;
	for(i=0;i<5;i++)
	cout << "Dizinin " << i+1 <<"  eleman� = " << a[i] << endl;
	
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	if(a[i]<a[j]) {
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	cout << "\nK���kten B�y�ke Do�ru S�raya dizilmi� hali \n\n";
	for(i=0;i<5;i++)
	cout << "Dizinin " << i+1 <<"  eleman� = " << a[i] << endl;
	

	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	if(a[i]>a[j]) {
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	
	cout << "\nB�y�kten K����e Do�ru S�raya dizilmi� hali \n\n";
	for(i=0;i<5;i++)
	cout << "Dizinin " << i+1 <<"  eleman� = " << a[i] << endl;
	
}

