#include <iostream>
using namespace std;

int main()
{

                  //    maxLimit  c. karty  pin   penize
   int acc[5][4] =  {{100000,   549684, 5493, 89753},
                        {1000000,   186403, 4289, 169700},
                        {100000,    147943, 1084, 58900},
                        {1000000,   950943, 2683, 257697},
                        {50000,     364723, 7816, 15970}};
    int num,pin,lim,m,w,d,pokus;
    char opn;
    bool login = false;


    while(!login && pokus < 5){
    cout << "enter number of your credit card ";
    cin  >>  num;
    cout << "enter your pin ";
    cin >> pin;

   for(int i=0;i<6;i++){
        if( num == acc [i][1]&& pin == acc [i][2]){
                cout << endl;
                cout << " welcome, this is your account status. Your max.amout on acc. is " << acc[i][0] << " and u have " << acc[i][3] << " kc " << endl;
                login = true;
        }
            }
    if (!login){
        cout<< "wrong login" << endl;
        cout << endl;
        pokus++;

    }
    if (pokus > 4){
        cout << "too much wrong login, bye";
        return 0;
    }



     }
     start:
    cout << "choose one: " << endl;
    cout << "a)withdraw cash " << endl;
    cout << "b)deposit cash " << endl;
    cout << "c)leave " << endl;
    cin >> opn;
     switch (opn){

   case 'a':
          cout <<"how much do u want to withdraw:  ";
          cin >> w;
          for(int i = 0; i< 5;i++){
          if (num == acc [i][1]&& pin == acc [i][2]){
                cout << endl;
                if(w<=acc[i][3]){
                w=acc[i][3]-w;
               cout << " your account balance is "<< w;}
               else cout << "u dont have enough money, your account balance is "<< acc[i][3] <<endl;
         }}
     break;

   case 'b':
          cout <<"how much do u want to deposit:  ";
          cin >> d;
           for(int i = 0; i< 5;i++){
          if (num == acc [i][1]&& pin == acc [i][2]){
                cout <<endl;
                if(d+acc[i][3]<= acc[i][0]){
                d=acc[i][3]+d;
                cout << " your account balance is "<< d;}
                else cout << "you can deposite max." << acc[i][0] <<" your account balance is "<< acc[i][3] <<endl;
          }}
     break;

   case 'c':
          cout << "bye";
     break;

     default : cout << "error choose again ";
     goto start;
    break;
    }
    cout << "bye";





























}
