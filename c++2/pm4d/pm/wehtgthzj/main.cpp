#include <iostream>

using namespace std;

int main()
{

   cout << "zadejte 3 cisla" << endl;
   int x [3];
    for(int i = 0;i<3;i++)
    {
        cin >> x[i];
    }
    for(int i = 0;i<3;i++)
    {
        cout << x[i] << endl;
    }

    return 0;
}
