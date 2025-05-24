#include <iostream>
using namespace std;

void names ()
{
    string nama [5];
    // Input nama
    for (int i = 0; i<5 ; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ":";
        cin >> nama [i];
    }

    //Menampilkan nama
    cout << "\n+-------------------+\n";
    cout << "|       Daftar      |\n";
    cout << "|        Nama       |\n";
    cout << "+-------------------+\n";
    
    for (int i = 0 ; i<5 ; i++) {
        cout << "Nama ke-" << i + 1 << ":" << nama [i] << "\n";
    }

}


int main() {
    cout << "==============================\n";
    cout << "         Hello World!\n";
    cout << "     Indonesia Yok Hebat\n";
    cout << "==============================\n\n";

    cout << "Input Penduduk Indonesia\n\n";
    names();

    
    return 0;
}
