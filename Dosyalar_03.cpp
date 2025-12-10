#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip> // std::setw, std::setprecision i√ßin


using namespace std;

class DeneyVeriKaydedici {
private:
    ofstream dosyaAkisi; 
    string dosyaAdi;

public:
    // Constructor 
    
    DeneyVeriKaydedici(string isim) : dosyaAdi(isim) {
        
        dosyaAkisi.open(dosyaAdi.c_str());

        if (!dosyaAkisi.is_open()) {
            cerr << "Hata: " << dosyaAdi << " dosyasi acilamadi!" << endl;
        } else {
            cout << "[Sistem]: " << dosyaAdi << " basariyla olusturuldu." << endl;
            dosyaAkisi << "# Zaman(s)\tKonum(m)\tHiz(m/s)" << endl;
            dosyaAkisi << "# ------------------------------------" << endl;
        }
    }

    // Veri Kaydetme Fonksiyonu
   
    void veriEkle(double zaman, double konum, double hiz) {
        if (dosyaAkisi.is_open()) {
            // Verileri belirli bir hassasiyetle (precision) yaz˝yoruz
            dosyaAkisi << fixed << setprecision(4) 
                       << zaman << "\t\t" 
                       << konum << "\t\t" 
                       << hiz << endl;
        }
    }

    // Destructor 
    ~DeneyVeriKaydedici() {
        if (dosyaAkisi.is_open()) {
            dosyaAkisi.close();
            cout << "[Sistem]: " << dosyaAdi << " guvenle kapatildi." << endl;
        }
    }
};


class SerbestDusmeSimulasyonu {
private:
    double g; // Yer√ßekimi ivmesi (m/s^2)
    double ilkYukseklik;

public:
    SerbestDusmeSimulasyonu(double yukseklik) : ilkYukseklik(yukseklik), g(9.81) {}

    void baslat(DeneyVeriKaydedici& kaydedici, double toplamSure, double adimAraligi) {
        double t = 0.0;
        double y = ilkYukseklik;
        double v = 0.0;

        cout << "Simulasyon basliyor..." << endl;

        while (y > 0 && t <= toplamSure) {
            
            y = ilkYukseklik - (0.5 * g * t * t);
            v = g * t;

            if (y < 0) y = 0; // Yere «arpma
           
            kaydedici.veriEkle(t, y, v);

            t += adimAraligi;
        }
        cout << "Simulasyon tamamlandi." << endl;
    }
};

int main() {
    
    DeneyVeriKaydedici kaydedici("serbest_dusme_verisi.txt");

    
    SerbestDusmeSimulasyonu deney(100.0); 

   
    deney.baslat(kaydedici, 5.0, 0.1); 

    
    
    return 0;
}
