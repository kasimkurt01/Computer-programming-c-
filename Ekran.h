// gotoXY fonksiyonu kütüphane
#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;
HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
void gotoXY(int x, int y){
	CursorPosition.X=x;
	CursorPosition.Y=y;
	SetConsoleCursorPosition(console,CursorPosition);
}
