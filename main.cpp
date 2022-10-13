#include <iostream>

class Program {
public:
    void main() {
        // ini comment

        // tipe data & variable
        int how_many = 0;

        // output
        std::cout << "Masukan banyak perulangan: ";

        // input
        std::cin >> how_many;

        // perulangan for
        for (int i = 1; i <= how_many; i++) {

            // if...else
            if (i % 2 == 0) {
                std::cout << "[1] Bilangan: " << i << " adalah genap" << std::endl;
            } else {
                std::cout << "[1] Bilangan: " << i << " adalah ganjil" << std::endl;
            }
        }

        // while loop
        int t1 = 1;
        while (t1 <= how_many) {
            if (t1 % 2 == 0) {
                std::cout << "[2] Bilangan: " << t1 << " adalah genap" << std::endl;
            } else {
                std::cout << "[2] Bilangan: " << t1 << " adalah ganjil" << std::endl;
            }

            t1++;
        }

        // do while loop
        int t2 = 1;
        do {
            if (t2 % 2 == 0) {
                std::cout << "[3] Bilangan: " << t2 << " adalah genap" << std::endl;
            } else {
                std::cout << "[3] Bilangan: " << t2 << " adalah ganjil" << std::endl;
            }

            t2++;
        } while (t2 <= how_many);

        // array 1 dimensi
        int array[6] = { 1, 2, 3, 4, 5, 6 };

        // array 2 dimensi
        int array_2d[2][4] = {
            { 1, 2, 3, 4 },
            { 5, 6, 7, 8}
        };

        // hasil print-out array & array_2d
        for (auto& i : array) {
            std::cout << i << " ";
        }

        std::cout << std::endl;

        for (auto& deep : array_2d) {
            for (auto& i : deep) {
                std::cout << i << " ";
            }

            std::cout << std::endl;
        }
    }
};

// ini main nya atau ENTRY_POINT
int main() {
    (new Program)->main();
}
