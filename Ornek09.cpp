#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    setlocale(LC_ALL,"TURKISH");
    float a,b,c;
    // toplama operat�r� +
    cout << setw(40)<<"Toplama i�in ilk say�y� giriniz :"; cin >> a;
    cout << setw(40)<<"Toplama i�in ikinci say�y� giriniz :"; cin >> b;
    c=a+b;
    cout << a <<"+"<<b << "=" << c <<" dir\n";
    
    // ��kartma operat�r� -
    
    c= a-b;
    cout << a <<"-"<<b << "=" << c <<" dir\n";
    
    // �arpma Operat�r� *
    
    c= a*b;
    cout << a <<"x"<<b << "=" << c <<" dir\n";
    // B�lme Operat�r�
    c= a/b;
    cout << a <<"/"<<b << "=" << c <<" dir\n";
    
    // Mod alma operat�r� %
    c= (int)a%(int)b;
    cout << a <<"mod"<<b << "=" << c <<" dir\n";
    // art�rma operat�r� ++
    c++;
    cout << "sonucun bir fazlas� ++:" <<  c <<" dir\n";
    // eksiltme operat�r�
    c--;
    cout << "sonucun bir eksi�i --:" <<  c <<" dir\n";
    
    
    return 0;
}
