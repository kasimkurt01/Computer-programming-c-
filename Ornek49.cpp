#include<iostream>
#include<string>
using namespace std;
class Bisiklet{
	private:
	string renk;
	float hiz;
	string Tip;
	public :
	Bisiklet(string r, float h, string t) {
		renk =r;
		hiz=h;
		Tip=t;
	}
	void Yaz(){
		cout << "\nTipi\t:" << Tip 
			 << "\nRengi\t:" << renk
			 << "\nHiz\t:" << hiz << endl;
		
	}
	
	
	
};

int main (){
	Bisiklet B1("Sari",10,"Yol Bisikleti");
	Bisiklet c1("Siyah",25,"Yaris Bisikleti");
	
	B1.Yaz();
	cout << "\nikinci Bisiklet\n";
	c1.Yaz();
	return 0;
}
