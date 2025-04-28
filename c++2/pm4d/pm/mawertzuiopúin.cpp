#include <iostream>

#include <fstream>

using namespace std;



int main()

{

   string cislo,;
   fstream soubor;
   soubor.open("studenti.dat", ios::out);

    cout << "Zapis do souboru:\n";
    cout << "Zadejte jednociferne cislo: ";

    getline (cin, cislo);
    cout << "vyberte jednu z moznosti " << endl;
    cout << "1.vypsat obsah souboru"<< endl;
    cout << "2.zapsat do souboru"<< endl;
    cout << "3.konec  programu" << endl;

    soubor  << cislo  << "\n";

    getline (cin, cislo);

    soubor  << cislo  << "\n";
    soubor.close();

    switch (){
        case "1":
            soubor.open("studenti.dat", ios::in);

            cout << "Cteni ze souboru:\n";

            getline(soubor, cislo);

            cout << "Nazev predmetu:" <<cislo << "\n";

            getline(soubor , cislo);

            cout << "Pocet studentu:" <<cislo << "\n";

            soubor.close();
     break;
        case "2":
        string vstup;

        ofstream soubor;

        soubor.open("studenti.dat");

        cout << "Zapis do souboru:\n";

        cout << "Zadejte nazev predmetu:";

        getline (cin, vstup);

        soubor  << vstup  <<"\n";

        cout << "Zadejte pocet studentu:";

        getline (cin, vstup);

        soubor  << vstup  << "\n";

        soubor.close();
     break;
        case"3":



    }

    return 0;


}
