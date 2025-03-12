#include <iostream>
using namespace std;

int main() {
    int tinggi = 5; // Tinggi setiap segitiga kecil
    int bagian = 3; // Jumlah segitiga yang membentuk pohon

    int lebar_pohon = tinggi + (bagian - 1); // Lebar dasar segitiga terbesar

    // Membuat bagian-bagian segitiga (daun)
    for(int n = 0; n < bagian; n++) { // Loop untuk setiap segitiga
        for(int i = 0; i < tinggi + n; i++) { // Baris dalam segitiga
            // Cetak spasi untuk meratakan segitiga ke tengah
            for(int j = 0; j < lebar_pohon - i - 1; j++) {
                cout << " ";
            }
            // Cetak bintang untuk membuat segitiga
            for(int k = 0; k < (2 * i + 1); k++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    // Membuat batang pohon
    int lebar_batang = tinggi / 2; // Lebar batang pohon
    int tinggi_batang = bagian;    // Tinggi batang pohon
    for(int i = 0; i < tinggi_batang; i++) {
        // Cetak spasi untuk posisi batang di tengah
        for(int j = 0; j < lebar_pohon - lebar_batang / 2 - 1; j++) {
            cout << " ";
        }
        // Cetak batang pohon
        for(int k = 0; k < lebar_batang; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
