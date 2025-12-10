#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip> // std::setw, std::setprecision için

// FIZIK BOLUMU - BILGISAYAR PROGRAMLAMA DERSI
// KONU: Nesne Yönelimli Dosya İşlemleri (File I/O)

// Senaryo: Bir serbest düşme deneyinin verilerini (Zaman, Konum, Hız)
// kaydeden bir sınıf tasarlıyoruz.

using namespace std;

// ---------------------------------------------------------
// SINIF: DeneyVeriKaydedici
// Amacı: Dosya işlemlerini kapsülleyerek (encapsulation)
// ana programın dosya detaylarıyla uğraşmasını engellemek.
// ---------------------------------------------------------
class DeneyVeriKaydedici {
private:
    ofstream dosyaAkisi; // Yazma işlemi için akış nesnesi
    string dosyaAdi;

public:
    // Constructor (Yapıcı Fonksiyon)
    // Nesne oluşturulduğu an dosyayı açar.
    DeneyVeriKaydedici(string isim) : dosyaAdi(isim) {
        // Dosyayı yazma modunda açıyoruz
        dosyaAkisi.open(dosyaAdi);

        if (!dosyaAkisi.is_open()) {
            cerr << "Hata: " << dosyaAdi << " dosyasi acilamadi!" << endl;
        } else {
            cout << "[Sistem]: " << dosyaAdi << " basariyla olusturuldu." << endl;
            // Başlık satırını (Header) yazalım
            dosyaAkisi << "# Zaman(s)\tKonum(m)\tHiz(m/s)" << endl;
            dosyaAkisi << "# ------------------------------------" << endl;
        }
    }

    // Veri Kaydetme Fonksiyonu
    // Fiziksel verileri alır ve formatlı bir şekilde dosyaya yazar.
    void veriEkle(double zaman, double konum, double hiz) {
        if (dosyaAkisi.is_open()) {
            // Verileri belirli bir hassasiyetle (precision) yazıyoruz
            dosyaAkisi << fixed << setprecision(4) 
                       << zaman << "\t\t" 
                       << konum << "\t\t" 
                       << hiz << endl;
        }
    }

    // Destructor (Yıkıcı Fonksiyon)
    // Nesne yok edildiğinde (kapsam dışına çıktığında) dosyayı otomatik kapatır.
    // Bu, "RAII" prensibi gereği kaynak sızıntısını önler.
    ~DeneyVeriKaydedici() {
        if (dosyaAkisi.is_open()) {
            dosyaAkisi.close();
            cout << "[Sistem]: " << dosyaAdi << " guvenle kapatildi." << endl;
        }
    }
};

// ---------------------------------------------------------
// SINIF: SerbestDusmeSimulasyonu
// Amacı: Fiziksel hesaplamaları yapan sınıf.
// ---------------------------------------------------------
class SerbestDusmeSimulasyonu {
private:
    double g; // Yerçekimi ivmesi (m/s^2)
    double ilkYukseklik;

public:
    SerbestDusmeSimulasyonu(double yukseklik) : ilkYukseklik(yukseklik), g(9.81) {}

    void baslat(DeneyVeriKaydedici& kaydedici, double toplamSure, double adimAraligi) {
        double t = 0.0;
        double y = ilkYukseklik;
        double v = 0.0;

        cout << "Simulasyon basliyor..." << endl;

        while (y > 0 && t <= toplamSure) {
            // Basit Euler yöntemi ile fiziksel hesaplama
            y = ilkYukseklik - (0.5 * g * t * t);
            v = g * t;

            if (y < 0) y = 0; // Yere çarptı

            // Veriyi kaydedici nesnesine gönderiyoruz
            // Dosya işleminin NASIL yapıldığı bu sınıfın umurunda değil.
            kaydedici.veriEkle(t, y, v);

            t += adimAraligi;
        }
        cout << "Simulasyon tamamlandi." << endl;
    }
};

int main() {
    // 1. Dosya kaydedici nesnesini oluştur (Dosya otomatik açılır)
    DeneyVeriKaydedici kaydedici("serbest_dusme_verisi.txt");

    // 2. Fizik simülasyonunu oluştur
    SerbestDusmeSimulasyonu deney(100.0); // 100 metreden bırakılıyor

    // 3. Simülasyonu çalıştır ve kaydediciyi referans olarak gönder
    deney.baslat(kaydedici, 5.0, 0.1); // 5 saniye, 0.1s adım aralığı

    // 4. Program bittiğinde 'kaydedici' nesnesi yok edilir 
    // ve destructor çalışarak dosyayı kapatır.
    
    return 0;
}