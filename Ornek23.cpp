#include<iostream>
using namespace std;

bool asal(int n){
	bool s= true;
	for(int i=2;i<n;i++) 
	if(n%i==0) return false;
	return s;
}

int main(){
	setlocale(LC_ALL,"TURKISH");
	for(int i=1;i<30;i++)
	if(asal(i)) cout << i << " say�s� asald�r\n";
//	else cout << i << " say�s� asal de�ildir\n";
	return 0;		

}
