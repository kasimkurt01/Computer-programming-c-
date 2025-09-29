#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    setlocale(LC_ALL,"TURKISH");
    float a,b,c=0;
    cout << setw(40)<<"iþlem yapmak için iki sayýyý giriniz :"; 
	cin >> a>> b;
    //  artýrarak ata +=
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
    // çarp ata *=
    c=2;
    cout << "c=" <<c <<"\n";
    c*=a;
    cout <<   "c*=" <<a << " c="<<c<<"\n";
    
    // böl ata /=
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
