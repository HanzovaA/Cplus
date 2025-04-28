#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

fstream soubor("zapis.txt", ios::out);

// operace se souborem
 cout << "jak tenhle bullshit funguje"<< endl;
//nemusi byt volano, bude zavolano po destruovani objektu
soubor.close();


    cin.get();

    return 0;
}
