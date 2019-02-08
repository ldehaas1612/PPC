#include <iostream>

using std::cout;
using std::endl;

int main_1_7(){

    int size;
    cout << "Hoe groot? " << endl;
    std::cin >> size;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}