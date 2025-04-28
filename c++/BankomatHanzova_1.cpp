#include <iostream>
using namespace std;


int stav(int num,int acc,int pin){
for(int i=0;i<6;i++){
        if( num == acc [i][0]&& pin == acc [i][1]){
                cout << endl;
        cout << "this is your account balance " << "kc"<< acc[i][2]  <<  endl;

}
}
}

//funkce

int main()
{
                  // c. karty  pin penize
    int acc[5][3] = { {549684, 5493, 89753},
                     {186403, 4289, 169700},
                     {147943, 1084, 58900},
                     {950943, 2683, 257697}};
    int num,pin,with,dep,pokus,bal;
    char opn;
    bool login = false;

    while(!login && pokus < 3){
    cout << "enter number of your credit card ";
    cin  >>  num;
    cout << "enter your pin ";
    cin >> pin;

   for(int i=0;i<6;i++){
        if( num == acc [i][0]&& pin == acc [i][1]){
                cout << endl;
                cout << " welcome, this is your account status. You have tvoje mama" << endl;
                login = true;
        }
            }
    if (!login){
        cout<< "wrong login" << endl;
        cout << endl;
        pokus++;

    }
    if (pokus > 2){
        cout << "too much wrong login, bye";
        return 0;
    }

     }
     start:
    cout << "choose one: " << endl;
    cout << "a)withdraw cash " << endl;
    cout << "b)see account balance " << endl;
    cout << "c)pin change " << endl;
    cout << "d)leave " << endl;
    cin >> opn;
     switch (opn){

   case 'a':
          cout <<"how much do u want to withdraw:  ";
          cin >> with;
          for(int i = 0; i< 5;i++){
          if (num == acc [i][0]&& pin == acc [i][1]){
                cout << endl;
                if(with<=acc[i][2]){
                with=acc[i][2]-with;
               cout << " your account balance is "<< with;}
               else cout << "You dont have enough money, your account balance is "<< acc[i][2]<< "kc" <<endl;
         }}
     break;

   case 'b':
            stav(num,acc,pin);
       break;


         /* cout <<"how much do u want to deposit:  ";
          cin >> dep;
           for(int i = 0; i< 5;i++){
          if (num == acc [i][0]&& pin == acc [i][1]){
                cout <<endl;
                if(dep+acc[i][2]<= acc[i][0]){

                cout << " your account balance is "<< dep;}
                else cout << "you can deposite max." << acc[i][0] <<" your account balance is "<< acc[i][2] <<endl;
          }}*/
     break;

   case 'c':
        // zmena pinu
        break;

   case 'd':
          cout << "bye";
     break;

     default : cout << "error choose again ";
     goto start;
    break;
    }
    cout << "bye";





























}
