#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama1, nama2, alamat1, alamat2, nohp1, nohp2, paket, metode;
    int harga, ongkir, total;


    cout << "=== Layanan Pengiriman Barang ===\n";
    cout << "=====================================\n";
    cout << "---Masukkan Data Pengirim---\n";

    cout << "Masukkan Nama Pengirim: ";
    getline(cin, nama1);

    cout << "Masukkan Alamat Pengirim: ";
    getline(cin, alamat1);

    cout << "Masukkan Nomor HP pengirim: ";
    getline(cin, nohp1);

    cout << "---Masukkan Data Penerima---\n";

    cout << "Masukkan Nama Penerima: ";
    getline(cin, nama2);

    cout << "Masukkan Alamat Penerima: ";
    getline(cin, alamat2);

    cout << "Masukkan Nomor HP Penerima: ";
    getline(cin, nohp2);
    
    cout << "------------------------\n";
    cout << "Masukkan Jenis Paket: ";   
    getline(cin, paket);

    cout << "Masukkan Harga Barang : ";
    cin >> harga;

    cout << "Masukkan Ongkos Kirim: ";
    cin >> ongkir;
    total = harga + ongkir; 

    cout << "Masukkan metode pembayaran : ";
    cin >> metode;

    cout << "\n";
    cout << "---DATA PENGIRIM---\n";
    cout << "Nama Pengirim: " << nama1 << endl;
    cout << "Alamat Pengirim: " << alamat1 << endl;
    cout << "Nomor HP Pengirim: " << nohp1 << endl;
    cout << "---DATA PENERIMA---\n";
    cout << "Nama Penerima: " << nama2 << endl;
    cout << "Alamat Penerima: " << alamat2 << endl; 
    cout << "Nomor HP Penerima: " << nohp2 << endl;
    cout << "---------------------\n";
    cout << "Jenis Paket: " << paket << endl;
    cout << "Harga Paket: " << "Rp " << harga << endl;
    cout << "Ongkos Kirim: " << "Rp " << ongkir << endl;
    cout << "---------------------\n";
    cout << "Total Harga: " << "Rp " << total << endl;
    cout << "Metode Pembayaran : " << metode << endl;
    cout << "---------------------\n";
    cout << "Terima kasih telah menggunakan layanan kami .\n";

}