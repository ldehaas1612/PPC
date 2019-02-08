#include <iostream>

using std::cout;
using std::endl;

int main_6_3(){

    int size;
    cout << "Hoe groot? " << endl;
    std::cin >> size;

    int fullRow = size-1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(i == 0 || i == fullRow || j == 0 || j == fullRow){
                cout << "#";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}