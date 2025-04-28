#include <iostream>

using namespace std;

int main()
{
 string user [6][4] = {{"Jindrich"," Joska","J.Joska","1234"},
                     {"Sobeslav"," Ruzek","S.Ruzek","4321"},
                     {"Zlata"," Jaskova","Z.Jaskova","5678"},
                     {"Antonie"," Forejtova","A.Forejtova","8765"},
                     {"Radomir"," Volny","R.Volny","9012"},
                     {"Ida"," Petrusova","I.Petrusova","2109"}};

    int pokus;
    string login,pin;
    bool prihlaseni = false;

    while(!prihlaseni && pokus < 3){
    cout << "Zadejte vas login " << endl;
    cin >>login;
    cout << "Zadejte vas pin " << endl;
    cin >>pin;

    for(int i=0;i<6;i++){
        if( login == user [i][2]&& pin == user [i][3]){
                cout <<""<< endl;
                cout << "vitej " << user[i][0] << user[i][1] << endl;
                prihlaseni = true;
        }
         }
    if (!prihlaseni){
        cout<< "spatny login nebo heslo" << endl;
        cout << endl;
        pokus++;
        }
    if (pokus > 3){
        cout << "moc spatnych pokusu";
        return 0;
     }

    }

    return 0;
}
