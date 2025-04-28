#include <iostream>
#include <cstring>  // pro strcmp a strcpy

using namespace std;

struct Book {
    char title[100];
    char author[100];
    int year;
    int pages;
};

void pridatKnihu(Book** &knihy, int &pocet) {
    Book* novaKniha = new Book;

    cout << "Zadej nazev knihy: ";
    cin.ignore();
    cin.getline(novaKniha->title, 100);

    cout << "Zadej autora knihy: ";
    cin.getline(novaKniha->author, 100);

    cout << "Zadej rok vydani: ";
    cin >> novaKniha->year;

    cout << "Zadej pocet stran: ";
    cin >> novaKniha->pages;

    knihy[pocet++] = novaKniha;
}

void vypisKnihy(Book** knihy, int pocet) {
    if (pocet == 0) {
        cout << "Zadne knihy nejsou evidovane." << endl;
        return;
    }
    for (int i = 0; i < pocet; ++i) {
        cout << "Nazev: " << knihy[i]->title << ", Autor: " << knihy[i]->author
             << ", Rok: " << knihy[i]->year << ", Stran: " << knihy[i]->pages << endl;
    }
}

void vyhledatPodleAutora(Book** knihy, int pocet) {
    char hledanyAutor[100];
    cout << "Zadej jmeno autora: ";
    cin.ignore();
    cin.getline(hledanyAutor, 100);

    bool nalezeno = false;
    for (int i = 0; i < pocet; ++i) {
        if (strcmp(knihy[i]->author, hledanyAutor) == 0) {
            cout << "Nazev: " << knihy[i]->title << ", Rok: " << knihy[i]->year
                 << ", Stran: " << knihy[i]->pages << endl;
            nalezeno = true;
        }
    }
    if (!nalezeno) {
        cout << "Nebyla nalezena zadna kniha od tohoto autora." << endl;
    }
}

void smazatKnihu(Book** &knihy, int &pocet) {
    char hledanyNazev[100];
    cout << "Zadej nazev knihy ke smazani: ";
    cin.ignore();
    cin.getline(hledanyNazev, 100);

    for (int i = 0; i < pocet; ++i) {
        if (strcmp(knihy[i]->title, hledanyNazev) == 0) {
            delete knihy[i];
            for (int j = i; j < pocet - 1; ++j) {
                knihy[j] = knihy[j + 1];
            }
            pocet--;
            cout << "Kniha byla smazana." << endl;
            return;
        }
    }
    cout << "Kniha nebyla nalezena." << endl;
}

void uvolnitPamet(Book** knihy, int pocet) {
    for (int i = 0; i < pocet; ++i) {
        delete knihy[i];
    }
    delete[] knihy;
}

int main() {
    Book** knihy = new Book*[100];  // max 100 knih
    int pocet = 0;

    int volba;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Pridat knihu\n";
        cout << "2. Vypsat knihy\n";
        cout << "3. Vyhledat podle autora\n";
        cout << "4. Smazat knihu\n";
        cout << "5. Konec\n";
        cout << "Vyber moznost: ";
        cin >> volba;

        switch (volba) {
            case 1: pridatKnihu(knihy, pocet); break;
            case 2: vypisKnihy(knihy, pocet); break;
            case 3: vyhledatPodleAutora(knihy, pocet); break;
            case 4: smazatKnihu(knihy, pocet); break;
            case 5: uvolnitPamet(knihy, pocet); cout << "Program ukoncen.\n"; break;
            default: cout << "Neplatna volba!\n"; break;
        }
    } while (volba != 5);

    return 0;
}
