#include <iostream>
using namespace std;

// 1) İki int toplayan fonksiyon
int topla(int a, int b) {
    cout << "int + int fonksiyonu cagirildi\n";
    return a + b;
}

// 2) Üç int toplayan fonksiyon
int topla(int a, int b, int c) {
    cout << "int + int + int fonksiyonu cagirildi\n";
    return a + b + c;
}

// 3) İki double toplayan fonksiyon
double topla(double x, double y) {
    cout << "double + double fonksiyonu cagirildi\n";
    return x + y;
}

int main() {
    int    a = 3, b = 5, c = 10;
    double x = 2.5, y = 4.7;

    cout << "topla(a, b)   = " << topla(a, b) << endl;      // 1. fonksiyon
    cout << "topla(a, b, c)= " << topla(a, b, c) << endl;  // 2. fonksiyon
    cout << "topla(x, y)   = " << topla(x, y) << endl;      // 3. fonksiyon

    return 0;
}
