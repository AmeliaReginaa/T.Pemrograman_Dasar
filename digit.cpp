#include <iostream>
using namespace std;

int main(){
    int angka, jumlah_digit = 0;
    cout << "masukan angka: ";
    cin >> angka;
    //Lakukan perulangan while untuk menghitung jumlah digit 
while (angka != 0){
    jumlah_digit++;
        angka /= 10;
  }

  cout << "Jumlah digit: " << jumlah_digit << endl;

  return 0;
}
