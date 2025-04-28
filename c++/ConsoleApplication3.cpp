#include <iostream>
using namespace std;

void ukazkamenu() {
    cout << "*************MENU*************" << endl;
    cout << "1. Vybrat hotovost" << endl;
    cout << "2. Dotaz na zustatek na uctu" << endl;
    cout << "3. Zmena PINu" << endl;
    cout << "4. Konec programu" << endl;
    cout << "******************************" << endl;
}

int main()
{
    // c. karty  pin penize
    int ucet[4][3] = { {549684, 5493, 89753},
                     {186403, 4289, 169700},
                     {147943, 1084, 58900},
                     {950943, 2683, 257697} };
    int pokus=0;
    int cislokarty, pin;
    bool prihlaseni = false;
    while (!prihlaseni && pokus < 3) {
        cout << "Zadejte cislo kreditni karty: ";
        cin >> cislokarty;
        cout << "Zadejte pin: ";
        cin >> pin;




        for (int i = 0; i < 5; i++) {

            if (cislokarty == ucet[i][0] && pin == ucet[i][1]) {
                cout << "Prihlaseni probehlo uspesne";
                prihlaseni = true;
            }
        }
        if (!prihlaseni) {
            cout << "Neplatne prihlaseni";
            pokus++;
        }
        if (pokus > 2) {
            cout << "Prekrocili jste limit pokusu";
            return 0;
        }
    }
    //Vybrat hotovost, Dotaz na zůstatek na uctu, Změna PINu, Konec programu
    int moznost;

    do {
        ukazkamenu();
        cout << "Moznost: ";
        cin >> moznost;
        system("cls");
        switch (moznost) {

        case 1:cout << "Vyberova castka: ";
            int vyberovacastka;
            cin >> vyberovacastka;
            for (int i = 0; i < 5; i++) {
                if (cislokarty == ucet[i][0] && pin == ucet[i][1]) {
                    if (vyberovacastka <= ucet[i][2]) {
                        ucet[i][2] = ucet[i][2] - vyberovacastka;
                        cout << "Zustatek na uctu je: " << ucet[i][2] << "Kc" << endl;
                    }
                    else cout << "nedostatek fananci " << endl;
                }
            }
            break;
        case 2:cout << "Zustatek je: " << "Kc" << endl; break;

        
        case 4:cout << "Nasledanou, hezky den";
        }
    } while (moznost != 4);
    system("pause>0");



}


