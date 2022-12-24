// ANS is great
//
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "\n enter a: ";
    cin >> a;

    cout << "\n enter b: ";
    cin >> b;
    
    if (a > b)
    {
        cout << "\nanswer is a.";
        cout << "\n";
    }
    if (b > a)
    {
        cout << "\nanswer is b." << endl;
        cout << "\n";

        return 0;
    }
}