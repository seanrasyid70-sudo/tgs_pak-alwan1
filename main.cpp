
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, sekolah;
    char ulang;

    do {
        cout << "\n===== INPUT DATA SISWA =====" << endl;

        cout << "Masukkan Nama: ";
        getline(cin, nama);

        cout << "Masukkan Sekolah: ";
        getline(cin, sekolah);

        cout << "\n===== HASIL INPUT =====" << endl;
        cout << "Nama: " << nama << endl;
        cout << "Sekolah: " << sekolah << endl;

        cout << "\nIngin mengulang? (y/n): ";
        cin >> ulang;
        cin.ignore(1000, '\n');

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nProgram selesai!" << endl;

    return 0;
}
