#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"TURKISH");
	cout << setw(15)<<"bool = "<< setw(4)<<sizeof(bool) << setw(10)<<" byte. \n";
	cout << setw(15)<<"int = "<< setw(4)<<sizeof(int) << setw(10)<<" byte. \n";
	cout << setw(15)<<"float = "<<setw(4)<< sizeof(float) << setw(10)<<" byte. \n";
	cout << setw(15)<<"double = "<<setw(4)<< sizeof(double) <<setw(10)<< " byte. \n";
    cout << setw(15)<<"long double = "<<setw(4)<< sizeof(long double) <<setw(10)<< " byte. \n";	
	return 0;
}
