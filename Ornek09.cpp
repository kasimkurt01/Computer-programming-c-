#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    setlocale(LC_ALL,"TURKISH");
    float a,b,c;
    // toplama operatörü +
    cout << setw(40)<<"Toplama için ilk sayýyý giriniz :"; cin >> a;
    cout << setw(40)<<"Toplama için ikinci sayýyý giriniz :"; cin >> b;
    c=a+b;
    cout << a <<"+"<<b << "=" << c <<" dir\n";
    
    // çýkartma operatörü -
    
    c= a-b;
    cout << a <<"-"<<b << "=" << c <<" dir\n";
    
    // Çarpma Operatörü *
    
    c= a*b;
    cout << a <<"x"<<b << "=" << c <<" dir\n";
    // Bölme Operatörü
    c= a/b;
    cout << a <<"/"<<b << "=" << c <<" dir\n";
    
    // Mod alma operatörü %
    c= (int)a%(int)b;
    cout << a <<"mod"<<b << "=" << c <<" dir\n";
    // artýrma operatörü ++
    c++;
    cout << "sonucun bir fazlasý ++:" <<  c <<" dir\n";
    // eksiltme operatörü
    c--;
    cout << "sonucun bir eksiði --:" <<  c <<" dir\n";
    
    
    return 0;
}
