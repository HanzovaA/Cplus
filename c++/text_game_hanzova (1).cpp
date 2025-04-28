#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <windows.h>

using namespace std;

void intruduce(string name,string city,string colour,int age=0){
 cout << "Hi, I'm " << name << endl;
 cout << "I'm from " << city << endl;
 cout << "My favourite color is " << colour << endl;
 cout << "and I'm "<< age << " years old" << endl;


}
void task1v(string meh){
cout << "you failed therefore you only get knife" << endl;
string weapon={"sword"};
}



int main()
{
    char characters;
    char task1;
    char location;
    int normalg;
    int girlg;
    int bossg;
    int x;
    int myHp = 1500;
    int gHp = 1400;
    int gGHp = 950;
    int gBHp = 2000;
    bool fight = false;
    bool fight2 = false;
    bool fightb = false;
    int mana = 100;
    int manah = 100;
    char book;
    string next;
    string riddle;
    string riddlea;
    string riddleb;
    string riddlec;
    char foodd;
    string dog;
    string weapon;
    system("color 05");
    cout << "WELCOME IN THE TOKYO AT 2050, THAT'S UNDER THE ATTACK OF GHOST" << endl;
    system("pause");
    cout << "Choose your character, with u will save the city." << endl;
    cout << "Nakashi(type N)" << endl;
    cout << "Akira(type A)" << endl;
    cout << "Kushina(type K)" << endl;
    start:
    cin >> characters;

    switch(characters){
    case 'N':
        intruduce("Nakashi","Tokyo","purple",17);
        break;
    case 'A':
        intruduce("Akira","Kyoto","black",16);
        break;
    case 'K':
        intruduce("Kushina","Osaka","red",17);
        break;
    default: cout << "wrong letter, try again:  ";
     goto start;
     }

    /////UVOD
    system("pause");
    cout << " " <<endl;
    cout << "Dabi: ,,Oh, hi you're finally awake''."<< endl;
    cout << "Dabi: ,,U somehow got in the center of Tokyo, which is under the attack of ghosts.''"<< endl;
    cout << "Dabi: ,,U have to get to the only train that still works and it will take u to our base.'' "<< endl;
    cout << "There is no time to waste, so let's go" <<endl;
    system("pause");
    cout << " " <<endl;
    cout << "U should to get some a weapon at first"<< endl;
    cout << "If you get right answer to one of these questions you will get: "<< endl;
    cout << "a - a gun  "<< endl;
    cout << "b - a sword "<< endl;
    cout << "c - a bow "<< endl;
    cout << "Choose the one you want or know the answer"<< endl;
    cout << "a) 17+3*5=? "<< endl;
    cout << "b) 6*9+6+9=?"<< endl;
    cout << "c) 10*10+15+18=?"<< endl;
    start2:
    cout << "letter: ";
    cin >> task1;
    cout << "result: ";
    cin >> x;

    switch (task1) {
        case 'a': //32
     if (x==32){
        weapon={"gun"};
     }
     else task1v(" ");
    break;

        case 'b'://69
    if (x==69){
        weapon={"sword"};
    }
     else task1v(" ");
    break;

        case 'c'://133
    if (x==133){
        weapon={"bow"};
    }
     else task1v(" ");
    break;
    default: cout <<"wrong letter, try again ";
    goto start2;
    break;
    }
    cout << "you obtain " << weapon << endl;
    cout << endl;
    cout << "Dabi: ,,Now you have everything you need, i have to go now so see u at the base hopefully...''" << endl;
    sleep(3);
    cout << "Dabi: ,,...oh i almost forgot here u have this handbook, u will find here everything u need here and now actually goodbye''" << endl;
    sleep(3);
    cout << " type 'h' to open the handbook" << endl;
    cin >> book;
    cout << "HANDBOOK" << endl;
    cout << "types of ghosts:"<< endl;
    cout << "Normal ghost - max. atk 500, Hp 1400" <<endl;
    cout << "Little girl -  max. atk 700, Hp 950" <<endl;
    cout << "Boss - max. atk 1000, Hp 2000" << endl;
    sleep(3);
    cout << "fighting options: 1) normal atk max.350/500" << endl;
    cout << "               2) spell max. 2x normal atk, can be used only twice(u have 100 mana 1 spell = -50 mana) " << endl;
    cout << "               3) heal can be also used only twice (u have 100 mana heal 1 heal = -50 mana)" << endl;
    system ("pause");

    //obsah handbook
    cout << "Choose the next location, each one is different, so choose wisely. " << endl;
    cout << "a)Shibuya "<< endl;
    cout << "b)Shinjuku "<< endl;
    cin >> location;

    switch (location) {
    case 'a':
        cout <<"You headed towards Shibuya... "<<endl;
        cout << "You found some food, but it's dog food. Do you want to pick it up?" << endl;
        cout<< " y=yes, n=no"<< endl;
        cin >> foodd;
        if (foodd == 'y'){
            cout << "After a while you find a dog"<< endl;
            sleep(3);
            cout << "Don't be shy give him the food" << endl;
            sleep(3);
            cout << "awwwww" <<endl;
            sleep(3);
            cout << "he seems to like it"<< endl;
            cout <<"give him a name";
            cin >> dog;}
            sleep(3);
            cout <<"oh sh*t, did u just hear that?"<< endl;
            sleep(3);
            cout << "U slowly turn around..."<< endl;
            sleep(3);
            cout <<"... and see a ghost staring at u"<< endl;
        ///////////////////////////////////////////////////////fight/////////////////////

        while(!fight){
        srand(time(0));
        int myAtk = rand ()%350;
        int gAtk = rand ()%500;
        cout <<" 1) use " << weapon << " 2) use spell 3) heal" <<endl;
        cin >> normalg;
        switch (normalg) {
        case 1:
            myHp-=gAtk;
            gHp-=myAtk;
            cout << "Your atk "<< myAtk<< ", your Hp " << myHp<< ", ghost atk " << gAtk<< ", ghost Hp " << gHp;
        break;
        case 2:
          if (mana>=50){
           myHp-=gAtk;
           gHp=gHp-(2*myAtk);
           mana-=50;}
           else cout << "you don't have enough mana " << endl;
           cout << "Your atk "<< myAtk<< ", your Hp " << myHp<< ", ghost atk " << gAtk<< ", ghost Hp " << gHp;
        break;
        case 3:
            if (manah>=50){
            myHp+=100;
            manah-=50;}
        cout << myHp;
        break;
        }

        if (gHp<=0){cout << "u win " << endl; fight = true;}
            else { cout << " try again" << endl;}
            if (myHp <= 0) { cout << " u lose"; myHp=1500; gHp=1000; mana=100; manah=100; fight = false; }

        } cout << "*...ugh,uff,uff* u got me, but at least i can finally rest in peace... Oh wait one last thing, you said you're heading toward the boss ghost... he, he kidnapped one woman, could you please save her after u beat his ass. It... it ... is my sister. Tell her that i love her and i am okay at safe place. Here is a map *Cough,cough* just save her please."<< endl;
        break;

        ///////////////////////////////////////////////DRUHA MOŽNOST//////////////////////////////////////////////////

        case 'b':
            cout <<"You headed towards Shinjuku ... "<<endl;
            cout << " You found some food, but it's  dog food. Do you want to pick it up?" << endl;
            cout<< " y=yes, n=no"<< endl;
            cin >> foodd;
             if (foodd == 'y'){
             cout << "After a while you find a dog"<< endl;
             sleep(3);
             cout <<"awwwww"<< endl;
             sleep(3);
             cout << "Don't be shy give him the food" << endl;
             sleep(3);
             cout<< "he seems to like it" <<endl;
             cout <<"give him a name";
             cin >> dog;}
             sleep(3);
             cout <<"oh sh*t, did u just hear that?"<< endl;
             sleep(3);
             cout << "U slowly turn around..."<< endl;
             sleep(3);
             cout <<"... and see a ghost of little girl staring at u"<< endl;

        while(!fight2){
        srand(time(0));
        int myAtk = rand ()%500;
        int gGAtk = rand ()%700;
        cout <<" 1) use " << weapon << " 2) use spell 3) heal" <<endl;
        cin >> girlg;
        switch (girlg) {
        case 1:
            myHp-=gGAtk;
            gGHp-=myAtk;
            cout << "Your atk "<< myAtk<< ", your Hp " << myHp<< ", ghost atk " << gGAtk<< ", ghost Hp " << gGHp;
        break;
        case 2:
          if (mana>=50){
           myHp-=gGAtk;
           gGHp=gGHp-(2*myAtk);
           mana-=50;}
           else cout << "you don't have enough mana " << endl;
           cout << "Your atk "<< myAtk<< ", your Hp " << myHp<< ", ghost atk " << gGAtk<< ", ghost Hp " << gGHp;
        break;
        case 3:
            if (manah>=50){
            myHp+=100;
            manah-=50;}
        cout << myHp;
        break;
        }

        if (gGHp<=0){cout << "u win"<< endl; fight2 = true;}
            else { cout << " try again" << endl;}
            if (myHp <= 0) { cout << " u lose"; myHp=1500; gGHp=1000; mana=100; manah=100; fight = false; }

        }cout << " *...ugh,uff,uff* u got me, but at least i can finally rest in peace… Oh wait one last thing , you said you're heading toward the boss ghost… he, he kidnapped one woman, could u please save her after u beat his ass. It.. it .. is *sob,sob* my mother.Tell her that i love her and i am okay at safe place. Here is a map *Cough,cough* just save her please." << endl;
            break;
        }

       ////////////RIDDLES
        system("pause");
        cout <<"You go by the map"<< endl;
        sleep(3);
        cout << "After while u find the place marked on the map"<< endl;
        sleep(3);
        cout << "There is a door, but you can only open it, if you'll solve the riddle." <<endl;
        /////////RIDDLE 1
        while (riddle != "dark"){
        cout <<"Cannot be seen, cannot be felt, cannot be heard, cannot be smelt. It lies behind the stars and beneath the hills. Ends life and kills laughter. What am I?" << endl;
        cin >> riddle;//dark
        if (riddle=="dark") {
            cout<< "that's right"<<endl;
        }

        else { cout << "try again"<< endl;}
        }

        //////RIDDLE 2
        cout << "There is another door."<< endl;

        while (riddlea!="heart"){
        cout <<"If you break me, I'll not stop working. If you can touch me, my work is done. If you lose me, you must find me with a ring soon after. What am I?" << endl;
        cin >> riddlea;//heart
        if (riddlea=="heart"){
            cout<< "that's right"<<endl; }
        else { cout << "try again" <<endl; }
        }

       /////////RIDDLE 3
        cout << "There is another door. "<< endl;

        while (riddleb!="fire"){
        cout <<"Feed me and I live. Give me a drink and I die. What am I?"<< endl;
        cin >> riddleb;//fire
	        if (riddleb=="fire") {
            cout<< "that's right"<<endl;
	        }
        else {cout << "try again" <<endl; }
        }

        ////////////RIDDLE 4
        cout << "There is another door. "<< endl;

        while (riddlec!="wind"){
        cout <<"I pass before the sun, yet make no shadow. What am I? "<< endl;
        cin >> riddlec;//wind
	        if (riddlec=="wind") {
            cout<< "that's right"<<endl;
	        }
        else {cout << "try again" <<endl; }
        }

//////////////////////////////////////////////final boss
    cout << "uuu you smartass "<< endl;
    cout << "In front of you open a big room/cave "<<endl;
    cout << "Now you have to defeat the boss"<<endl;
    system("pause");
    cout << " /////////////////////////////////////////////////// BOSS FIGHT /////////////////////////////////////////////////// " << endl;
    system("color 04");
    cout << "your hp increases to 1600 and your mana increases to 150" <<endl;
    myHp = 1600;
    mana = 150;
    while(!fightb){
        srand(time(0));
        int myAtk = rand ()%600;
        int gBAtk = rand ()%1000;
        cout <<" 1) use " << weapon << " 2) use spell 3) heal" <<endl;
        cin >> bossg;
        switch (bossg) {
        case 1:
            myHp-=gBAtk;
            gBHp-=myAtk;
            cout << "Your atk "<< myAtk<< ", your Hp " << myHp<< " , ghost atk" << gBAtk<< ", ghost Hp " << gBHp;
        break;
        case 2:
          if (mana>=50){
           myHp-=gBAtk;
           gBHp=gBHp-(2*myAtk);
           mana-=50;}
           else cout << "you don't have enough mana " << endl;
           cout << "Your atk "<< myAtk<< ", your Hp " << myHp<< ", ghost atk " << gBAtk<< ", ghost Hp " << gBHp;
        break;
        case 3:
            myHp+=100;
        cout << myHp;
        break;
        }

        if (gBHp<=0){cout << " U WIN " << endl; fightb = true;}
            else { cout << " try again" << endl;}
            if (myHp <= 0) { cout << " u lose";myHp=1600; gBHp=1500; mana=150; fightb = false; }

        }
        system("color 02");
        cout << "*ught* your are stronger than i thought... "<< endl;
        system("pause");

        cout << "At the back you found the woman.."<< endl;
        cout << "She is really pretty and introduces herself as Bellatrix"<< endl;
        if (foodd== 'y'){
            sleep(3);
            cout << "*woof, woof*"<< endl;
            sleep(3);
            cout << "heh? what is that noice"<< endl;
            sleep(3);
            cout << "omg look that's "<< dog << " how did he find us?"<< endl;
        }
        else cout << "After that you all together headed to base "<< endl;
        sleep(3);
        cout << "Along the way, you talked to Bellatrix and you caught each other's eyes" <<endl;
        system("color 01");
        sleep(3);
        cout << "          THE END            "<< endl;
        system("color 03");
        sleep(3);
        system("color 05");
        sleep(3);
        cout << " I hope you enjoyed this game <33"<< endl;



    return 0;
}
