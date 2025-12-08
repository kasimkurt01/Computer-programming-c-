#include <iostream>
#include <fstream> // Dosya islemleri icin
#include <string>  // String ifadeler icin
#include <cstdio>  // Dosya silme ve yeniden adlandirma (remove, rename) icin

using namespace std;

// 1. ADIM: Yapi (Struct) Tanimlama
// Ogrenci bilgilerini tutacak kalibimiz.
struct Ogrenci {
    int numara;
    string ad;
    string soyad;
    string bolum;
};

// Global dosya adi degiskeni
const string DOSYA_ADI = "ogrenciler.txt";

// --- Fonksiyon Prototipleri ---
void ogrenciEkle();
void ogrenciListele();
void ogrenciSil();

int main() {
    // Turkce karakter sorunu yasamamak icin (Windows icin)
    setlocale(LC_ALL, "Turkish"); 

    int secim;
    while (true) {
        cout << "\n--- OGRENCI KAYIT SISTEMI ---\n";
        cout << "1. Ogrenci Ekle\n";
        cout << "2. Listele\n";
        cout << "3. Ogrenci Sil\n";
        cout << "4. Cikis\n";
        cout << "Seciminiz: ";
        cin >> secim;

        switch (secim) {
            case 1: ogrenciEkle(); break;
            case 2: ogrenciListele(); break;
            case 3: ogrenciSil(); break;
            case 4: 
                cout << "Programdan cikiliyor..."; 
                return 0;
            default: cout << "Gecersiz secim!\n";
        }
    }
}

// 2. ADIM: Dosyaya Veri Ekleme Fonksiyonu
void ogrenciEkle() {
    Ogrenci ogr;
    
    // Kullanicidan bilgileri alalim
    cout << "\n-- Yeni Ogrenci Ekle --\n";
    cout << "Numara: "; cin >> ogr.numara;
    cout << "Ad: "; cin >> ogr.ad;
    cout << "Soyad: "; cin >> ogr.soyad;
    cout << "Bolum: "; cin >> ogr.bolum;

    // Dosyayi 'append' (ekleme) modunda aciyoruz.
    // ios::app -> Dosyanin sonuna ekler, onceki verileri silmez.
    ofstream dosya(DOSYA_ADI.c_str(), ios::app); 

    if (dosya.is_open()) {
        // Verileri dosyaya aralarinda bosluk birakarak yaziyoruz.
        dosya << ogr.numara << " " << ogr.ad << " " << ogr.soyad << " " << ogr.bolum << "\n";
        dosya.close(); // İsimiz bitince dosyayi mutlaka kapatiyoruz.
        cout << ">> Kayit basariyla eklendi.\n";
    } else {
        cout << ">> Dosya acilamadi!\n";
    }
}

// 3. ADIM: Dosyadan Veri Okuma Fonksiyonu
void ogrenciListele() {
    Ogrenci ogr;
    
    // Dosyayi okuma (input) modunda aciyoruz.
    ifstream dosya(DOSYA_ADI.c_str());

    cout << "\n-- Kayitli Ogrenciler --\n";
    cout << "No\tAd\tSoyad\tBolum\n";
    cout << "--------------------------------\n";

    if (dosya.is_open()) {
        // Dosya sonuna (EOF) gelene kadar oku
        // >> operatoru bosluklara gore okuma yapar
        while (dosya >> ogr.numara >> ogr.ad >> ogr.soyad >> ogr.bolum) {
            cout << ogr.numara << "\t" << ogr.ad << "\t" << ogr.soyad << "\t" << ogr.bolum << "\n";
        }
        dosya.close();
    } else {
        cout << ">> Dosya bulunamadi veya acilamadi!\n";
    }
}

// 4. ADIM: Dosyadan Veri Silme Fonksiyonu
void ogrenciSil() {
    int silinecekNo;
    cout << "\n-- Ogrenci Sil --\n";
    cout << "Silinecek Ogrenci Numarasi: ";
    cin >> silinecekNo;

    ifstream okuDosya(DOSYA_ADI.c_str());
    ofstream yazDosya("gecici.txt"); // Gecici bir dosya olusturuyoruz

    Ogrenci ogr;
    bool bulundu = false;

    if (okuDosya.is_open() && yazDosya.is_open()) {
        // Tum kayitlari tek tek oku
        while (okuDosya >> ogr.numara >> ogr.ad >> ogr.soyad >> ogr.bolum) {
            // Eger okunan numara, silinmek istenen numara DEGILSE gecici dosyaya yaz.
            if (ogr.numara != silinecekNo) {
                yazDosya << ogr.numara << " " << ogr.ad << " " << ogr.soyad << " " << ogr.bolum << "\n";
            } else {
                bulundu = true; // Silinecek kaydi bulduk ve yazmadik (yani sildik)
            }
        }
        
        // Dosyalari kapatiyoruz ki uzerinde islem yapabilelim
        okuDosya.close();
        yazDosya.close();

        // Orijinal dosyayi silip, gecici dosyanin adini degistiriyoruz
        remove(DOSYA_ADI.c_str());
        rename("gecici.txt", DOSYA_ADI.c_str());

        if (bulundu)
            cout << ">> Ogrenci silindi.\n";
        else
            cout << ">> Bu numaraya sahip ogrenci bulunamadi.\n";

    } else {
        cout << ">> Dosya islemi hatasi!\n";
    }
}