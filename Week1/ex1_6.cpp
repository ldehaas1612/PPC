#include <iostream>
#include <c++/map>

using std::cout;
using std::endl;
using std::string;

int main_1_6(){
    string nonL33t;
    int stringL;
    std::map<char, char> characters;
    characters['a'] = '4';
    characters['b'] = '8';
    characters['e'] = '3';
    characters['g'] = '9';
    characters['l'] = '1';
    characters['i'] = '1';
    characters['q'] = '2';
    characters['s'] = '5';
    characters['t'] = '7';
    characters['o'] = '0';


    cout << "Voer een zin in: " << endl;
    std::getline(std::cin,nonL33t);
    stringL = nonL33t.size();

    for(int i = 0; i < stringL; i++){
        char current = tolower(nonL33t[i]);
        if(characters.count(current) > 0){
            nonL33t[i] = characters[current];
        } else {
            if(nonL33t[i] >= 'a' && nonL33t[i] <= 'z') {
                nonL33t[i] = current - 32;
            }
        }
    }

    cout << "1337-speak:" << endl;
    cout << nonL33t << endl;
    return 0;
}