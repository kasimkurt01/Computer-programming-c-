// fonksiyonlar
#include<iostream>
#include<iomanip> 
using namespace std;
//  globa deðiþkenler burada tanýmlanýr.
 
float topla(float a, float b); 
float cikar(float a, float b);
int modal(float a, float b);
float bol(float a, float b);
float carp(float a, float b);

int main(){
	float x=50,y=6;
	cout << x <<"+" << y << "="<< topla(x,y) << "\n";
	cout << x <<"-" << y << "="<< cikar(x,y) << "\n";
	cout << x <<"x" << y << "="<< carp(x,y) << "\n";
	cout << x <<"/" << x << "="<< bol(x,y) << "\n";
	cout << x <<"mod" << y << "="<< modal(x,y) << "\n";
	return 0;
}



int modal(float a, float b){
	return (int) a % (int) b;
}

float bol(float a, float b){
	return a/b;
}

float carp(float a, float b){
	return a*b;
}

float cikar(float a, float b){
	return a-b;
}

float topla(float a, float b){
	return a+b;
}
