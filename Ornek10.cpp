#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    setlocale(LC_ALL,"TURKISH");
    float a,b,c=0;
    cout << setw(40)<<"i�lem yapmak i�in iki say�y� giriniz :"; 
	cin >> a>> b;
    //  art�rarak ata +=
    c+=a;
    cout <<  "c+=" <<a << "="<<c<<"\n";
    c+=b;
    cout <<  "c+=" <<b <<"="<<c<<"\n";
    c=0;
    //  eksilit ve  ata -=
    c-=a;
    cout <<  "c-=" <<a << "="<<c<<"\n";
    c-=b;
    cout <<  "c-=" <<b <<"="<<c<<"\n";
    // �arp ata *=
    c=2;
    cout << "c=" <<c <<"\n";
    c*=a;
    cout <<   "c*=" <<a << " c="<<c<<"\n";
    
    // b�l ata /=
    c=20;
    cout << "c=" <<c <<"\n";
    c/=a;
    cout <<   "c/=" <<a << " c="<<c<<"\n";
    
    // mod al ve  ata %=
    int d;
    d=20;
    cout << "d=" <<d <<"\n";
    d %=(int)a;
    cout <<   "d%=" <<a << " d="<<d<<"\n";
    
    
    return 0;   
}
