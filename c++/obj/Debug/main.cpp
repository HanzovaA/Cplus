#include <iostream>

using namespace std;

int main()
{
    int age;
    string obcanstvi;

    cout << "Zadejte vas vek" << endl;
    cin >> age;
    if (age>=18){
        cout << " Mate ceske obcanstvi?(ano/ne)" << endl;
        cin >> obcanstvi;
        if (obcanstvi== "ano"){
            cout << "muzete volit" << endl;
        }
        else cout << "nemuzete volit" << endl;
    }
    else cout << "nemuzete volit" << endl;
    return 0;
}
