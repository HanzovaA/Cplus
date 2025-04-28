#include <iostream>

#include <fstream>

using namespace std;



int main()

{

   string cislo,opn;
   fstream soubor;
   soubor.open("studenti.dat", ios::out);

    cout << "Zapis do souboru:\n";
    cout << "Zadejte jednociferne cislo: ";

    getline (cin, cislo);
    cout << "vyberte jednu z moznosti " << endl;
    cout << "1.vypsat obsah souboru"<< endl;
    cout << "2.zapsat do souboru"<< endl;
    cout << "3.konec  programu" << endl;

    soubor  << opn  << "\n";

    getline (cin, opn);

    soubor  << opn  << "\n";
    soubor.close();

    switch (opn){
        case "1":
            soubor.open("studenti.dat", ios::in);

            cout << "Cteni ze souboru:\n";

            getline(soubor, cislo);

            cout << "Nazev predmetu:" <<cislo << "\n";

            getline(soubor , cislo);

            cout << "Pocet studentu:" <<cislo << "\n";

            soubor.close();
     break;

    }

    return 0;


}
