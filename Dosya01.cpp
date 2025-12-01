#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream Ofile;
	Ofile.open("Yeni.txt");
	
	if(Ofile.fail()){
		cout << "Dosya açýlamadý !...";
		exit(1);
	}
	else {
		Ofile << "Bu benim ilk dosyam\n";
		Ofile << "Merhaba Dünya";
	}
	Ofile.close();
	
}
