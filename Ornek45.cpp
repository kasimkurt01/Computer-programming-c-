#include<iostream>
#include<iomanip>
using namespace std;

class BankaHesabi{
	private :
		double bakiye;
	public :
		void ParaYatir(double m){
			bakiye +=m; // bakiye = bakiye +m
		}
		void ParaCek(double m){
			if(m<=bakiye) bakiye -=m;
			else 
			cout << "Yetersiz Bakiye !";
		}
		double hesapdok(){
			return bakiye;
		}
};

int main(){
	BankaHesabi Hesap;
	double h;
	char ch;
	setlocale(LC_ALL,"TURKISH");
	Hesap.ParaYatir(1000.0);
	cout << "Bakiye :" << Hesap.hesapdok() << endl;
	cout << "\nPara çek (c) / Para yatýrma (y) Basýnýz";
	cin >> ch;
	if (ch=='c') {
		cout << "Çekmek istediðiniz miktarý giriniz :";
		cin >> h;
		Hesap.ParaCek(h);
		cout << "Bakiye :" << Hesap.hesapdok() << endl;
		
	} else
	if (ch=='y'){
		cout << "Yatýrmak istediðiniz miktarý giriniz :";
		cin >> h;
		Hesap.ParaYatir(h);
		cout << "Bakiye :" << Hesap.hesapdok() << endl;
	}
	
}
