#include <iostream>
using namespace std; 
int GCD (int m, int n) {
     while (n !=0 )
     {
        int r = m % n;     // r adalah sisa bagi (mod) dari m dengan n
        m = n; 
        n = r;
     }
    return m;
}

int main () { 
    int a, b; 
    cout << "Masukkan angka pertama: ";
    cin >> a; 
    cout << "Masukkan angka kedua: ";
    cin >> b; 
    cout << "Hasil perhitungan dari " << a << " dan " << b << " adalah: " << GCD(a,b);

}