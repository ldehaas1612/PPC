#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main(){
    int length;
    string userc;

    cout << "Toets een lengte > 0" << endl;

    std::getline(std::cin, userc);

    length = std::stoi(userc);

    if(length> 15){
        length = 15;
    }

    cout << "De lengte is " << length << endl;
    return 0;
}