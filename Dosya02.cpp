#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	ifstream InFile;
	InFile.open("Yeni.txt");
	string veri;
	if(InFile.fail()){
		cout << "Dosya Açýlmadý ";
		exit(1);
	}
	else {
		InFile>> veri;
		cout << veri <<" ";
		InFile>> veri;
		cout << veri << " ";
	}
	InFile.close();
}
