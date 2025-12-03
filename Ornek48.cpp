#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct Ders{
	int Kodu;
	string Adi;
	float V1,F,SB;
	string YB;
};

struct Ogrenci{
	int Numarasi;
	string Adi;
	string Soyadi;
	Ders D1;	
};

void Yaz(Ogrenci X){
	cout << "Numarasi "<< X.Numarasi << "\n";
	cout << "Adi      "<< X.Adi << "\n";
	cout << "Soyadi   "<< X.Soyadi << "\n";
	
}

void BYaz(Ogrenci X){
	int B;
	X.D1.SB=0.4*X.D1.V1+0.6*X.D1.F;
	B=X.D1.SB;
	if (B<=39) X.D1.YB="F1";
	else if (B<=49) X.D1.YB="F2";
	else if (B<=54) X.D1.YB="DD";
	else if (B<=59) X.D1.YB="DC";
	else if (B<=64) X.D1.YB="CC";
	else if (B<=69) X.D1.YB="CB";
	else if (B<=79) X.D1.YB="BB";
	else if (B<=89) X.D1.YB="BA";
	else X.D1.YB="AA";
	
	cout << "Dersin Adi   "<< X.D1.Adi << "\n";
	cout << "Dersin Baþarý Notu   "<< X.D1.SB << "\n";
	cout << "Dersin Baþarý Notu Yazý ile   "<< X.D1.YB << "\n";
	
	
}

int main(){
	setlocale(LC_ALL,"TURKISH");
	Ogrenci O1,O2;
	O1.Numarasi=1235;
	O1.Adi="Ahmet";
	O1.Soyadi="Soydan";
	O1.D1.F=10205023;
	O1.D1.Adi="Bilgisayar Programlama";
	
	O2.Numarasi=3456;
	O2.Adi="Cevdet";
	O2.Soyadi="Kaçar";
	O2.D1.F=10205023;
	O2.D1.Adi="Bilgisayar Programlama";
	
	Yaz(O1); cout << endl;
	Yaz(O2);
	cout << O1.Adi << " Aldýðý " << O1.D1.Adi << "  ";
	cout  << " Dersinin Vize Notunu Gir :"; 
	cin >> O1.D1.V1;
	cout << "\nDersinin Final Notunu Gir :"; 
	cin >> O1.D1.F;
	Yaz(O1);
	BYaz(O1);
	
	return 0;
	
}
