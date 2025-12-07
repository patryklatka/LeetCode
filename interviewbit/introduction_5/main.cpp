#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ofstream plik("dane.txt", ios::binary); 

    if (!plik) {         
        cout << "Nie mozna otworzyc pliku!\n";
        return 1;
    }

    plik << "Hello world!\n";  
    plik << 123 << endl;      

    plik.close();
    
    ifstream plikA("dane.txt", ios::binary);

    string myText;
    while(getline(plikA, myText)){
        cout << myText;
    }
}
