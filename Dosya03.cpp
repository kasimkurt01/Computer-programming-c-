#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	string veri;
	ifstream file;
	setlocale(LC_ALL,"TURKISH");
	file.open("Yeni.txt");
	while(file >> veri){
		cout << veri << endl;
	}
	file.close();
}
