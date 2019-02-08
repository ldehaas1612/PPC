#include <iostream>

using std::cout;
using std::endl;

int main_1_5(){
    cout << "Toets een Character in: " << endl;
    char ch = std::cin.get();

    cout << ch << " + 32 = " << ch+32 << endl;
    cout << ch << " + 32 = " << char(ch+32) << endl;
    return 0;
}