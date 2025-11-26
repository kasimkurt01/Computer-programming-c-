#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
float const PI=3.14157;
class Kure{
	private :
		float r;
	public :
		void Ata(float r1){
			r=r1;
		}
		float Alan(){
			return 4*PI*pow(r,2);
		}
		float Hacim(){
			return 4/3*PI*pow(r,3);
		}
		float yaricap(){
			return r;
		}
		
};

int main(){
	Kure k1,k2,k3,k4;
	k1.Ata(4);
	k2.Ata(5);
	k3.Ata(6);
	k4.Ata(3);
	setlocale(LC_ALL,"TURKISH");
	cout << k1.yaricap() << " Yarýçaplý Kürenin Alaný :"
	     << k1.Alan() << endl;
	cout << k1.yaricap() << " Yarýçaplý Kürenin Hacmi :"
	     << k1.Hacim() << endl;
	    cout << endl;
	cout << k2.yaricap() << " Yarýçaplý Kürenin Alaný :"
	     << k2.Alan() << endl;
	cout << k2.yaricap() << " Yarýçaplý Kürenin Hacmi :"
	     << k2.Hacim() << endl;
		cout << endl;
	cout << k3.yaricap() << " Yarýçaplý Kürenin Alaný :"
	     << k3.Alan() << endl;
	cout << k3.yaricap() << " Yarýçaplý Kürenin Hacmi :"
	     << k3.Hacim() << endl;
	    cout << endl;
	cout << k4.yaricap() << " Yarýçaplý Kürenin Alaný :"
	     << k4.Alan() << endl;
	cout << k4.yaricap() << " Yarýçaplý Kürenin Hacmi :"
	     << k4.Hacim() << endl;
	
	
	
}
