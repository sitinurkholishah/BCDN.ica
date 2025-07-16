#include<iostream>
#include <string>
using namespace std;

int main() {
    string nama, varian;
    int harga, porsi, total;
    
    cout << "====Harga Varian Dimsum====\n";
    cout << "1. Dimsum Original: Rp 12.000\n";
    cout << "2. Dimsum Cabe: Rp 12.000\n";
    cout << "2. Dimsum Toping Sosis: 15.000\n";
    cout << "3. Dimsum Toping Keju: Rp 15.000\n";
    cout << "4. Dimsum Toping Chili Oil: Rp 15.000\n";
    cout << "5. Dimsum Toping Mix: Rp 16.000\n";
    cout << "\n";

    cout << "=================================\n";
    cout << "Masukkan Nama Pembeli: ";
    getline(cin, nama);
    cout << "Masukkan varian Dimsum: ";
    getline(cin, varian);
    cout << "Masukkan Porsi Dimsum: ";
    cin >> porsi;
    cout << "Masukkan Harga Dimsum: ";
    cin >> harga;
    total = harga * porsi;
    cout << "=================================\n";
    cout << "\n";

    cout << "=== Struk Pembelian Handak Dimsum ===\n";
    cout << "Nama pembeli: " << nama << endl;
    cout << "Varian Dimsum: " << varian << endl;
    cout << "Porsi Dimsum: " << porsi << endl;  
    cout << "Harga Dimsum: Rp " << harga << endl;
    cout << "==================================\n";
    cout << "Total Harga: Rp " << total << endl;
    cout << "==================================\n";
    cout << "Terima kasih Telah Memilih Handak Dimsum.\n";
    cout << "HANDAK DIMSUM SEKALI COBA HANDAK LAGI!!!\n";
    

}