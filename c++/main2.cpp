#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <windows.h>
using namespace std;



int main ()
{
    HANDLE  hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for( int k = 1;k <224; k++){
        SetConsoleTextAttribute(hconsole,k);
        cout << "OwO OwO OwO OwO OwO OwO OwO OwO poganek OwO OwO OwO OwO OwO OwO OwO OwO OwO OwO" << endl;
    }
}





    /*
    system("color 3D");
    cout << "tohle za chvilku neuvidite";
    sleep(5);
    system("cls");
    cout << "tohle ted vidite";
    sleep(5);
    system("cls");
    cout<< "a ted uz ne";
    }*/




     /*
    int x[10];
    ifstream soubor("soubr1.txt");
    for(int i = 0; i < 10;i++){
        soubor >> x[i];
    }
    for(int i = 0; i < 10;i++){
            x[i]+=15;
       cout << x[i]<< " ";

    }

 soubor.close();

  ofstream soubor2("soubr1.txt");

    for(int i = 0; i < 10;i++){
        soubor2 << x[i] << " " ;
        }

    return 0;
}
*/




/*
void greeting(string name);
int soucet (int x);
int maximum(int x, int y);
int maximum(float x, int y, int z);
float obsahKruhu(float r = 10)
{
    return 3.14*r*r;
}
int main()
{
    float r;
    greeting("alena");
    cout << soucet(6)<< endl;;
    cout << obsahKruhu;
    return 0;
}
void  greeting(string name)
{
    cout << " hi I'am " << name <<  endl;
}
int soucet(int x)
{
    x=x*3;
    return x;

} */





/*
int maximum(int x, int y,int z)
{
   if (x>y){
      if (x>z){
        return x;
        }
      else return z;
    }
    else {
       if (y>z){
        return y;
    }
    else return z;
    }
}
int main(){
    int x,y,z;
    cout << "write three numbers: " << endl;
    cin >> x >> y >> z;
    cout << "the bigger number is "<< maximum(x,y,z);

*/
/*void intruduceMe(string name,string surname,int age=0){
 cout << "Hi, I'm " << name << endl;
 cout << "My surname is " << surname << endl;
 cout << "I'm "<< age << " years old" << endl;
 cout << endl;
}

int main()
 {   int x;
     cin >>x;
     if(x==1){
     intruduceMe("Alena","Hanzova",15);
     }
     else if(x==2){
     intruduceMe("Marek","Kabat",16);
     }
     else
     intruduceMe("Misa","Margetinova",17);

*/










/*int math(int x,int y)
{

   x = x * y;
 return x;
}

int main()

 {
     int x,y;
     cin >>x >> y;
     int cislo = math (x,y);
     cout << cislo << " ";

*/




     /*
     string data [3][3] = {{"Alena","Hanzova","heslo123"},
                            {"Marek","Kabat","3003s"},
                            {"Darya","Panda","darya456"}};

    int number [3] = {466,869,598};

    string name, surname, password;

    bool login = false;

    while(!login){
    cout << " Enter your name: " << endl;
    cin >> name;
    cout << "Enter your surname: " << endl;
    cin >> surname;
    cout << "Enter your password: " << endl;
    cin >> password;

    for(int i=0;i<3;i++){
        if( name == data [i][0]&& surname == data [i][1])
            if(password == data [i][2]){
                cout << endl;
                cout<<"   User has: " << number[i] << "points ";
                login = true;
            }
    }
    if (!login){
        cout<< "wrong login" << endl;
        cout << endl;
    }
    }
*/



     /*
   int x[3][3] = {{1,2,3},{6,5,4},{8,7,9}};
    for ( int i=0;i<3;i++){

         cout <<" "<<x[1][i];
        }
        cout<<endl;
        for (int j=0;j<3;j++){

        cout<< " "<< x [j][1];

    }
     */



     /*
    int x[12] = {20,3,6,4,89,5,9,2,7,10,11,13};
    int y[12] = {10,2,5,6,13,66,78,22,26,1,33,12};
    int help;
    for ( int i=0;i<12;i++){
        for (int z=0;z<12;z++){
            if (y[i]==x[z]){
                help=help+1;

            }

        }
     }
     cout<<" " <<help;
   */





          //0 1 2 3 4
     /*int x[11] = {20,3};
     for( int i=0;i<11;i++){
        cin>> x[i];
     }
     cout << "                        "<< endl;
     cout << " from bigger to smaller: ";
     int y;
     for ( int i=0;i<11;i++){
        for (int z=0;z<11;z++){
            if (x[i]>x[z]){

                y=x[z];
                x[z] = x[i];
                x[i]=y;
            }

        }
     }
     for ( int j=0;j<11;j++){
     cout<< x[j]<<" ";
     }*/

     /*       //0 1 2 3 4
     int x[5] ={4,6,3,5,9};
     int y;
     y=x[1];
     x[1]=x[3];
     x[3]=y;
     for(int i=0;i<5;i++){
       cout<< x[i]<<" ";
     }
*/






     /*int y;
     char x[10] = {'6','2','4'};
for( int i=0;i<10;i++){
        cin>> x[i];
     x[i]+=5;}
     for( int i=0;i<10;i++){
      cout<<x[i]<<" ";
           */



     /*
   int x,y;
cout<<"enter number " <<endl;
   do {
   cin>>x;
   if(x==1){
     continue;
   }
   y=y+x;
   } while(x!=0);
   cout<< "result is "<<y;

*/








     /*
   srand(time(0));
   int x = rand ()%100;
   cout << x << endl;
   for(int i=0;i<10;i++){
        cout << (rand() % 10) +1<<" ";
   }
   return 0;
 }

*/

/*int i;
char znak;
cin >>
do {
    cout<<i<< endl;
    i++;
} while(znak!='');

  /*int pocet = 0;
  int x;
   cout << "Enter number ";
   cin >>x;
    if (x<0) {
        x=x*(-1);}
    else if (x==0) {
     pocet++;
    }*/
/*
   while(x>0){
    x = x/10;
    pocet++;

   }
 cout << pocet;*/

 /*for (;x>0;pocet++) {
    x=x/10;
 }
cout << "pocet cifer je "<< pocet;*/
// return 0;
 //}








  /*   for (int i=0 ;i<10; i++){
            cout << i << " ";
     }
  cout << endl << "xxxxxx"<< endl;
  int i = 0;
  while( i <10){
    cout << i << " ";
    i++;
  }
*/










 /*{ char anoNe;
  cin >> anoNe;
  switch (anoNe){

  case 'a':
  case 'A':
    cout << "odpoved ano";
    break;

  case 'n':
  case 'N':
    cout << "odpoved ne";
    break;
  default:
    cout<< "moznost je pouze ano nebo ne ";

  }



     return 0;

}*/

  /*  int x,y;
    char operace ;
    cout << " zadej priklad \n";
    cin >> x;
    cin >> operace;
    cin >> y;

     switch(operace){
     case '+':
         cout << "vysledek je "<< x + y << endl;
     break;

     case '-':
         cout << "vysledek je " << x-y <<  endl;
     break;

     case '*':
         cout << "vysledek je "<< x*y <<  endl;
     break;

      case '/':
          if (y==0){cout << "nelze delit nulou";}
          else
         {cout << "vysledek je "<< x/y <<  endl;}
     break;

      case '%':
        cout << "zbytek je "<< x%y <<  endl;
    break;

    default : cout << "wrong operation";
    break;
     }

  return 0;
*/















 /*  int day;
   cout << " insert number of the day \n"  ;
   cin >> day;

    day%=7;
   switch (day) {
   case 1:
        cout << " monday ";
        break;
    case 2:
        cout << " tuesday ";
        break;
    case 3:
        cout << " wendnesday ";
        break;
    case 4:
        cout << " thursday ";
        break;
    case 5:
        cout << " friday ";
        break;
    case 6:
        cout << " saturday ";
        break;
    case 0:
        cout << "sunday ";
        break;
    default: cout << "idiot";
        break;
*/











   /*cin >> x;

   if (x%2)
   {

    cout <<"cislo je liche" << endl;}
   else
    {cout <<"cislo je sude" << endl;}
*/
















   /*cin >> x;
   if (x>1000)
   {
       cout << "cislo je vetsi nez 1000" << endl;
   }
    else if  ( x >100)
   {
     cout << "cislo je mezi 101 az 1000"  <<endl;
   }
    else if  ( x >10)
   {
     cout << "cislo je mezi 11 az 100 "  <<endl;
   }
    else if  ( x <10)
   {
     cout << " cislo je mensi nez 10 "  <<endl;
   }
 */






  /*  int x,y,z;
    cout << "zadej hodnotu x" << endl;
    cin >> x;
    cout << "zadej hodnotu y" << endl;
    cin >> y;
    cout << "zadej hodnotu z" << endl;
    cin >> z;

    if (x<y)
     {
        if (x<z){
                cout << " nejmensi cislo je " << x <<  endl;
                } else cout << " nejmensi cislo je " << z << endl;



     }else {
            if (y<z){
                      cout << " nejmensi cislo je " << y <<  endl;
                    } else cout << " nejmensi cislo je " << z <<  endl;
           }

*/



