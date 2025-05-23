#include <iostream>
using namespace std;

void Names ()
{
    string Nama [5] = {"Liu","Cakra","Suisei","Gura","Archer"};

    for (int i = 0 ; i<5 ; i++) {
       cout << Nama [i] << "\n"; 
    }
}

int main() {
    cout << "Hello World!\n";
    cout << "Indonesia Yok Hebat\n";

    Names();

    return 0;
}
