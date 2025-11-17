#include<iostream>
#include<iomanip>
using namespace std;
int main(){
 int a = 500;
 int *p;
  p=&a;
  setlocale(LC_ALL,"TURKISH");
  cout << "Sonuç 1:" << *p << " adres "<< p << endl;
  cout << "Sonuç 2:" << *p+1 << " adres "<< p <<endl;
  cout << "Sonuç 3 :" << *p-1 << " adres "<< p+1 <<endl;
  
}
