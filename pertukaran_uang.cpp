#include <iostream>
using namespace std;

int main() {
    int uang, sisa, pecahan1000, pecahan500, pecahan100, pecahan50, pecahan25;

    cout << "Masukkan nilai uang (kelipatan 25): ";
    cin >> uang;

    sisa = uang;

    pecahan1000 = sisa / 1000;
    sisa %= 1000;

    pecahan500 = sisa / 500;
    sisa %= 500;

    pecahan100 = sisa / 100;
    sisa %= 100;

    pecahan50 = sisa / 50;
    sisa %= 50;

    pecahan25 = sisa / 25;

    cout << "Pecahan Rp1000: " << pecahan1000 << endl;
    cout << "Pecahan Rp500: " << pecahan500 << endl;
    cout << "Pecahan Rp100: " << pecahan100 << endl;
    cout << "Pecahan Rp50: " << pecahan50 << endl;
    cout << "Pecahan Rp25: " << pecahan25 << endl;

    return 0;
}
