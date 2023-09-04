// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
char teks1[10], teks2[10];
cout << "Masukan Nama Depan Mu ";
cin >> teks1;
cout << "Masukan Nama Belakang Mu ";
cin >> teks2;
strcat(teks1, " ");
strcat(teks1, teks2);
cout << "Nama Lengkap Mu " << teks1 << '\n';

    return 0;
}
