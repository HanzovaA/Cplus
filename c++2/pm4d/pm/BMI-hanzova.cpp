#include <iostream>

using namespace std;

int main()
{
    float weight,height,bmi;
    char sex;
    cout << "if you would like to know your BMI index enter this data:\n" ;
    cout << "your weight(kg): ";
    cin >> weight;
    cout << "your height(m): ";
    cin >> height;
    cout << "your sex: ";
    cin >> sex;
    bmi=weight/(height*height);
    switch(sex){
    case 'f':
       if(bmi<=19){cout << "your index is " << bmi << " - underweight"<< endl;}
        else if  (bmi<=23.9)
        {cout << "your index is " << bmi << " - normal state"<< endl; }

        else if  (bmi<=28.9)
        {cout << "your index is " << bmi << " - you have mild obesity "<< endl; }

        else if  (bmi<=38.9)
        {cout << "your index is " << bmi << " - obesity "<< endl; }

        else if (bmi>=39)
        {cout << "your index is " << bmi << " - extreme "<< endl; }
    break;

    case 'm':
        if(bmi<=20){cout << "your index is " << bmi << " - underweight"<< endl;}
            else if  (bmi<=24.9)
                {cout << "your index is "<< bmi << " - normal state"<< endl; }

            else if  (bmi<=29.9)
            {cout << "your index is "<< bmi << " - mild obesity "<< endl; }

            else if  (bmi<=39.9)
            {cout << "your index is "<< bmi << " - obesity "<< endl; }

            else if (bmi>=40)
            {cout << "your index is "<< bmi << " - extreme "<< endl; }
    break;
    default : cout << " !incorrectly entered values!";
        }
 return 0;
}

