// Dizilerdeki eleman sayýsý
#include<iostream>
#include<iomanip>
using namespace std;
int a[20]={1,5,3,2,0,3,11,4,2,1,5,2,3,2,3,4,3,5,2,0};

int m[3][3]={1,2,3, 2,2,2, 3,3,3};
int main(){
	int i,j,emax,emin;
	setlocale(LC_ALL,"TURKISH");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++) cout <<  m[i][j] << " ";
		cout << endl;
	}
	return 0;
}
