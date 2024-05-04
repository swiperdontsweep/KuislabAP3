#include <iostream>
using namespace std; 
int GCD (int m, int n) {
     while (n==0)
     {
        return m; 
     }
     return GCD (n,m%n);
}

int main () {
    int a, b; 
    cout << "Masukkan angka pertama: ";
    cin >> a; 
    cout << "Masukkan angka kedua: ";
    cin >> b; 
    cout << "Hasil perhitungan dari " << a << " dan " << b << " adalah: " << GCD(a,b);
}
