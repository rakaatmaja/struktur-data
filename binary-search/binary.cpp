#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int nilaiAwal = 0, nilaiAkhir = n-1;
    while (nilaiAwal <= nilaiAkhir) {
        int nilaiTengah = (nilaiAwal + nilaiAkhir) / 2;
        if (arr[nilaiTengah] == target) {
            cout << "\n\n\n\t\tAngka " << target << " ditemukan di indeks ke-" << nilaiTengah << " dalam array\n\n";
            return 0;
        }
        else if (arr[nilaiTengah] < target) {
            nilaiAwal = nilaiTengah + 1;
        }
        else {
            nilaiAkhir = nilaiTengah - 1;
        }
    }
    cout << "Angka " << target << " tidak ditemukan dalam array.\n";
    return 0;
}

