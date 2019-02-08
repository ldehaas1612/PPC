#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main_6_3C(){

    int size;
    cout << "Geef de Diameter: " << endl;
    std::cin >> size;

    double straal = size/2.0;
    double straal2 = straal * straal;
    for (int i = 0; i <= size; ++i) {
        for (int j = 0; j <= size; ++j) {
            double x = (i-straal)*(i-straal);
            double y = (j-straal)*(j-straal);
            double r = x+y;
            if((straal2)-r >= -straal && (straal2)-r <= straal){
                cout << "#";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}