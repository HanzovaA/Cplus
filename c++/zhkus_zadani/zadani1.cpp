#include <iostream>
#include <string>

using namespace std;

// Struktura pro uložení údajù o studentovi
struct Student {
    string jmeno;
    string prijmeni;
    int vek;
    int znamky[5];
};

// Konstanty
const int MAX_STUDENTU = 100;

// Funkèní prototypy
void pridatStudenta(Student studenti[], int &pocetStudentu);
void vypsatStudenty(const Student studenti[], int pocetStudentu);
void najdiNejlepsiho(const Student studenti[], int pocetStudentu);
void najdiStudenta(const Student studenti[], int pocetStudentu);
void smazatStudenta(Student studenti[], int &pocetStudentu);

int main() {
    Student studenti[MAX_STUDENTU];
    int pocetStudentu = 0;
    int volba;

    while (true) {
        cout << "\n--- Sprava studentu ---\n";
        cout << "1. Pridat studenta\n";
        cout << "2. Vypsat vsechny studenty\n";
        cout << "3. Najit nejlepsiho studenta\n";
        cout << "4. Vyhledat studenta podle prijmeni\n";
        cout << "5. Smazat studenta podle prijmeni\n";
        cout << "6. Konec programu\n";
        cout << "Zadej volbu: ";
        cin >> volba;

        // Ošetøení chybného vstupu
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Neplatny vstup, zkus to znovu.\n";
            continue;
        }

        switch (volba) {
            case 1:
                pridatStudenta(studenti, pocetStudentu);
                break;
            case 2:
                vypsatStudenty(studenti, pocetStudentu);
                break;
            case 3:
                najdiNejlepsiho(studenti, pocetStudentu);
                break;
            case 4:
                najdiStudenta(studenti, pocetStudentu);
                break;
            case 5:
                smazatStudenta(studenti, pocetStudentu);
                break;
            case 6:
                cout << "Ukoncuji program...\n";
                return 0;
            default:
                cout << "Neplatna volba.\n";
        }
    }

    return 0;
}

// Funkce pro pøidání studenta
void pridatStudenta(Student studenti[], int &pocetStudentu) {
    if (pocetStudentu >= MAX_STUDENTU) {
        cout << "Maximalni pocet studentu byl dosažen!\n";
        return;
    }

    Student novy;
    cout << "Zadej jmeno: ";
    cin >> novy.jmeno;
    cout << "Zadej prijmeni: ";
    cin >> novy.prijmeni;
    cout << "Zadej vek: ";
    cin >> novy.vek;

    cout << "Zadej 5 znamky (0-100):\n";
    for (int i = 0; i < 5; i++) {
        do {
            cout << "Znamka " << (i+1) << ": ";
            cin >> novy.znamky[i];
            if (novy.znamky[i] < 0 || novy.znamky[i] > 100)
                cout << "Neplatna znamka! Zadej hodnotu 0-100.\n";
        } while (novy.znamky[i] < 0 || novy.znamky[i] > 100);
    }

    studenti[pocetStudentu++] = novy;
    cout << "Student pridan.\n";
}

// Funkce pro vypsání všech studentù
void vypsatStudenty(const Student studenti[], int pocetStudentu) {
    if (pocetStudentu == 0) {
        cout << "Zadni studenti nejsou ulozeni.\n";
        return;
    }

    cout << "\nSeznam studentu:\n";
    for (int i = 0; i < pocetStudentu; i++) {
        cout << i+1 << ". " << studenti[i].jmeno << " " << studenti[i].prijmeni
             << ", vek: " << studenti[i].vek << ", znamky: ";
        for (int j = 0; j < 5; j++) {
            cout << studenti[i].znamky[j] << " ";
        }
        cout << endl;
    }
}

// Funkce pro nalezení nejlepšího studenta
void najdiNejlepsiho(const Student studenti[], int pocetStudentu) {
    if (pocetStudentu == 0) {
        cout << "Zadni studenti nejsou ulozeni.\n";
        return;
    }

    int nejlepsiIndex = 0;
    double nejlepsiPrumer = 0.0;

    for (int i = 0; i < pocetStudentu; i++) {
        double soucet = 0;
        for (int j = 0; j < 5; j++) {
            soucet += studenti[i].znamky[j];
        }
        double prumer = soucet / 5.0;
        if (prumer > nejlepsiPrumer) {
            nejlepsiPrumer = prumer;
            nejlepsiIndex = i;
        }
    }

    cout << "\nNejlepsi student je: " << studenti[nejlepsiIndex].jmeno << " " << studenti[nejlepsiIndex].prijmeni
         << " s prumerem " << nejlepsiPrumer << endl;
}

// Funkce pro vyhledání studenta podle pøíjmení
void najdiStudenta(const Student studenti[], int pocetStudentu) {
    if (pocetStudentu == 0) {
        cout << "Zadni studenti nejsou ulozeni.\n";
        return;
    }

    string hledanePrijmeni;
    cout << "Zadej prijmeni k vyhledani: ";
    cin >> hledanePrijmeni;

    bool nalezeno = false;
    for (int i = 0; i < pocetStudentu; i++) {
        if (studenti[i].prijmeni == hledanePrijmeni) {
            cout << studenti[i].jmeno << " " << studenti[i].prijmeni
                 << ", vek: " << studenti[i].vek << ", znamky: ";
            for (int j = 0; j < 5; j++) {
                cout << studenti[i].znamky[j] << " ";
            }
            cout << endl;
            nalezeno = true;
        }
    }

    if (!nalezeno) {
        cout << "Student nebyl nalezen.\n";
    }
}

// Funkce pro smazání studenta podle pøíjmení
void smazatStudenta(Student studenti[], int &pocetStudentu) {
    if (pocetStudentu == 0) {
        cout << "Zadni studenti nejsou ulozeni.\n";
        return;
    }

    string hledanePrijmeni;
    cout << "Zadej prijmeni studenta ke smazani: ";
    cin >> hledanePrijmeni;

    for (int i = 0; i < pocetStudentu; i++) {
        if (studenti[i].prijmeni == hledanePrijmeni) {
            // Pøesuneme všechny studenty za ním o jedno místo doleva
            for (int j = i; j < pocetStudentu - 1; j++) {
                studenti[j] = studenti[j+1];
            }
            pocetStudentu--;
            cout << "Student byl smazan.\n";
            return;
        }
    }

    cout << "Student s timto prijmenim nebyl nalezen.\n";
}
