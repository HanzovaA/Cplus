#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c,D,x1,x2,x;
    cout <<"zadejte tri cisla" << endl;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    if (a!=0){
        D=b*b-4*a*c;
        if (D>0){
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            cout << "x1=" << x1 << " x2= " << x2 << endl;
        }
        else if(D!=0){
                abs(D);
             x1= -b/2*a;
               = sqrt(-D)/(2*a);
             x2=-b/2*a -i
               = sqrt(-D)/(2*a);
             cout << "x1=" << x1 << " x2= " << x2 << endl;
            }
            else {x=-b/(2*a);
            cout << "x= "<< x << endl;
            }
    }
    else if (b!=0){
       x=-c/b;
       cout << "x= " << x;
       }
       else if(c!=0){
        cout << "rovnice nema reseni"<< endl;
       }
       else cout << "rovnice ma nekonecno mnoho reseni" << endl;


    return 0;
}
