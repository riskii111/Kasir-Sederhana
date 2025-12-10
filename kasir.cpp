#include<iostream>
#include<string>
using namespace std;

int main(){

    string nama;
    int harga, jumlah, jml_barang, subtotal, total = 0, totalBayar;
    int totalUnit = 0;     // tambahan
    int uang, kembalian;   // tambahan
    double diskon;

    cout << "Masukan Jumlah Barang : ";
    cin >> jml_barang;
    cin.ignore();

    for(int i = 1; i <= jml_barang; i++){
        cout << endl << "===== Barang ke " << i << " =====" << endl;

        cout << " Nama Barang\t: ";
        getline(cin, nama);

        cout << " Harga Barang\t: ";
        cin >> harga;

        cout << " jumlah Unitnya\t: ";
        cin >> jumlah;
        cin.ignore();

        subtotal = harga * jumlah;
        total += subtotal;

        totalUnit += jumlah;   // tambahan (menghitung total unit)
    }

    // Hitung diskon
    if(total >= 100000){
        diskon = total * 0.10;
    } else {
        diskon = 0;
    }
    
    totalBayar = total - diskon;

    // Tambahan: input uang pembeli
    cout << endl << "Masukan uang pembayaran : ";
    cin >> uang;

    kembalian = uang - totalBayar;

    // =========================== STRUK ===========================//
    cout << endl << "===== STRUK PEMBELIAN =====" << endl;
    cout << "Total Unit          : " << totalUnit << endl;   // tambahan
    cout << "Total sebelum diskon: " << total << endl;
    cout << "Diskon              : " << diskon << endl;
    cout << "Total bayar         : " << totalBayar << endl;
    cout << "Uang Pembeli        : " << uang << endl;       // tambahan
    cout << "Kembalian           : " << kembalian << endl; // tambahan

    return 0;
}
