#include <iostream>
using namespace std;

int main(){
string namaPembeli;
string makanan;
string minuman;
int hargaMakanan;
int jumlahMakanan;
int hargaMinuman;
int jumlahMinuman;
int totalMakanan;
int totalMinuman;
int totalBayar;

cout << "=================================="<< endl;
cout << "DATA PEMBELIAN KANTIN " << endl;
cout << "=================================="<< endl;

cout << "Nama Pembeli :";
cin >> "namaPembeli"

cout << "Nama Makanan   : ";
 cin >> makanan;
 
 cout << "Harga Makanan  : Rp ";
 cin >> hargaMakanan;

 cout << "Jumlah Makanan : ";
 cin >> jumlahMakanan;
 
  cout << "Nama Minuman   : ";
   cin >> minuman;
   
   cout << "Jumlah Minuman : ";
    cin >> jumlahMinuman;
    
    totalMakanan = hargaMakanan * jumlahMakanan;
    totalMinuman = hargaMinuman * jumlahMinuman;
    totalBayar = totalMakanan + totalMinuman;
    
     cout << "\n==================================" << endl;
     cout << "          HASIL PEMBELIAN         " << endl;
    cout << "==================================" << endl;
    cout << "Nama Pembeli   : " << namaPembeli << endl;
    cout << "Makanan        : " << makanan << endl;
    cout << "Total Makanan  : Rp " << totalMakanan << endl;
    cout << "Minuman        : " << minuman << endl;
    cout << "Total Minuman  : Rp " << totalMinuman << endl;
    cout << "----------------------------------" << endl;
    cout << "Total Bayar    : Rp " << totalBayar << endl;
    cout << "==================================" << endl;    
      
return 0;
}
