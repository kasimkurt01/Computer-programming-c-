#include <iostream>
using namespace std;
void EnBuyuk(int *p, int n){
	int *B, *p2;
	int i;
	B=p;
	for (i=0;i<n-1 ; ++i){
		p2=p+i+1;
		for(;p2<p+n;++p2)
		   if(*p2>*B) *B=*p2;
		
	}
	cout << "En Büyük Deðer :" << *B << endl;
	
}
// Pointer ile diziyi sýralayan fonksiyon (küçükten büyüðe)
void sirala(int *p, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int *pMin = p + i;           // i. elemanýn adresi, þimdilik en küçük kabul
        int *p2  = p + i + 1;        // aramaya buradan baþla

        // Geri kalan elemanlar içinde en küçüðü bul
        for (; p2 < p + n; ++p2)
        {
            if (*p2 < *pMin)
            {
                pMin = p2;           // yeni minimum adresi
            }
        }

        // i. eleman ile bulunan minimum elemaný yer deðiþtir
        int temp    = *(p + i);
        *(p + i)    = *pMin;
        *pMin       = temp;
    }
}

int main()
{
    int dizi[100];
    int n;
    setlocale(LC_ALL, "TURKISH");
    cout << "Kac eleman gireceksiniz? ";
    cin >> n;

    cout << n << " adet tamsayi giriniz:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> dizi[i];
    }

    // Dizinin ilk elemanýnýn adresini gönderiyoruz
    sirala(dizi, n);

    cout << "Siralanmis dizi (kucukten buyuge): ";
    // Diziyi pointer ile gezerek yazdir
    int *p = dizi;          // dizi == &dizi[0]
    for (; p < dizi + n; ++p)
    {
        cout << *p << " ";
    }
    cout << endl;
    EnBuyuk(dizi, n);
    return 0;
}
