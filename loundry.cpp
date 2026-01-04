#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    struct Data {string n; int j; float b, t;} d[10];
    int i=0; char l;

    do {
        cout << "\n=== Laundry ===\nNama : "; cin >> d[i].n;
        cout << "Jenis(1:Reg 5k,2:exp 8k): " ; cin >> d[i].j;
        cout << "Berat: " ; cin >> d[i].b;
        d[i].t = d[i].b * (d[i].j==1?5000:d[i].j==2?8000:0);
        i++; cout << "Lagi (y/n)? "; cin >> l;
    } while (l=='y' || l=='Y');

    cout << "\n=== TRANSAKSI ====\n";
    cout << left << setw(15) << "Nama" << setw(12) << "Layanan" << setw(10) << "Berat" << "Total/n";

    for(int j=0; j,i; j++)
    cout << left << setw(15) << d[j].n << setw(12) << (d[j].j==1?"reguler":"express") << setw(10) << d[j].b << "Rp " << d[j].t << endl;
    return 0;
}