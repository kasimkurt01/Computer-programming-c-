#include<iostream>
#include<string>
#include<cmath>
using namespace std;
const double PI=3.14157;

class Kure{
	private:
	double Yaricap;
	public :
		Kure (double r){
			Yaricap=r;
		}
		~Kure(){
		}
		void Alan(){
			cout << "Kürenin Alaný :" << 4*PI*pow(Yaricap,2) <<endl;
		}
		void Hacim(){
			cout <<"Kürenin Hacmi :"  << 4*PI*pow(Yaricap,3)/3  << endl;
		}
		void YRC(){
		   cout <<"Kürenin Yarý Çapý :"  << Yaricap  << endl;	
		}
};

int main(){
	Kure K1(5);
	setlocale(LC_ALL,"TURKISH");
    K1.YRC();
	K1.Alan(); K1.Hacim();
	Kure K2(6);
	K2.YRC();
	K2.Alan(); K2.Hacim();
}

