#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
// input jurusan dari user
void input() {
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi
// proses pemilihan jurusan menggunakan switch case
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;

        case 2:
            namaJurusan = "Teknik Elektro";
            statusKuota = "Kuota Penuh!";
            break;

        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;

        default:
        // kondisi jika kode jurusan tidak valid
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedur output
// menampilkan hasil seleksi jurusan
void output() {
    cout << "\n=== HASIL SELEKSI JURUSAN ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "-----------------------------------" << endl;
}

int main() {
    input();
    pilihanJurusan();
    output();

    return 0;
}