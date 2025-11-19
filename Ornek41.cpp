#include<iostream>
using namespace std;


 class Dizi
 {
 	private:
 		int *p;
 		int b;
 	public:
 		Dizi(int b1){
 			b=b1;
 			p=new int[b1];
		 }
		~Dizi(){
			delete [] p;
		}
		int & operator [] (int i){
		return *(p+i);
		}
 };


 int main(){
 	const int DiziBoyutu =10;
 	Dizi Diz(DiziBoyutu);
 	for(int i=0; i<DiziBoyutu; i++)
 	  Diz[i]=3*i;
 	for(int i=0; i<DiziBoyutu; i++)
 	  cout <<Diz[i] <<" ";
 }
