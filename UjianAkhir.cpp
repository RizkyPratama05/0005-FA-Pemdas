#include <iostream>
using namespace std;
class MasukUniversitas {
private:
    int uangPendaftaran;
public:
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;
 MasukUniversitas() {
 uangPendaftaran = 0;
    cout << "Masukan uang pendaftaran";
 }
 virtual void namaJalurMasuk() { 
    cout << "SNBT";
    cout << "SNBP";
    return; 
    }

 void setUangPendaftaran(int nilai) {
 this->uangPendaftaran = nilai;
 }
 float getUangPendaftaran() {
 return uangPendaftaran;
 }
 // isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
 // isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
 // isi disini untuk melengkapi class SNBP
};
int main() {
 // isi disini untuk fungsi main
}
