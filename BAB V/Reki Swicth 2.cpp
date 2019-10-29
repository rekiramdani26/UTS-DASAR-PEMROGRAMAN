#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "Memasukan sebuah bilangan bulat (1-3) : ";
    cin >> bilangan;

    switch (bilangan) {
        case 1:
              cout << "One" << endl;
              break;
        case 2:
              cout << "Two" << endl;
        case 3:
              cout << "Three" << endl;
              break;
        default:
              cout << "Saya hsnya kenal 1, 2, 3 saja" << endl;

    }
        return 0;

}
