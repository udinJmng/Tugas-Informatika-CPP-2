#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
char teks1[10], teks2[10];
int depan, kel, huruf;
cout << "Nama depan mu?: ";
cin >> teks1;
cout << "Masukan nama keluarga anda?: ";
cin >> teks2;

depan = strlen(teks1);
kel = strlen(teks2);
huruf = depan + kel;
cout << "Debug huruf " << huruf << '\n'; // debug the procces
cout << "Nama lengkap anda " << teks1 << " " << teks2 << "\n";

    return 0;
}
