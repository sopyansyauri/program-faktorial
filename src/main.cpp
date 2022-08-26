#include <iostream>

int nilaiFaktorial;


// dengan Cara Rekursif
int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n-1);
    }
}

void display() {
    std::cout << "PROGRAM FAKTORIAL" << std::endl;
    std::cout << "masukan angka faktorial\t: ";
    std::cin >> nilaiFaktorial;
}

int main() {
    display();
    std::cout << "hasilnya adalah\t\t: " << faktorial(nilaiFaktorial) << std::endl;

    return 0;
}