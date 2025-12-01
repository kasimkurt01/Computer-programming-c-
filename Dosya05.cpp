#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	fstream File;
	string line;
	setlocale(LC_ALL,"TURKISH");
	 File.open("Yeni.txt",ios_base::app|ios_base::in|ios_base::out);
	 if(!File){
	 	cerr << "Dosya açýlamadý";
	 	return 1;
	 }
	 else {
	 	while (getline(File,line)){
	 		cout << line << endl;
		 }
	File << "Bu bir denemedir";
	 }
	 
	 File.close();
	 return 0;
}
