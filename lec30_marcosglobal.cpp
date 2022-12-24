// MACRO
/*
#include <iostream>
using namespace std;

#define PI 3.14      // MACRO

int main()
{
    int r = 5;
    // double pi =3.14;
    double area = PI * r * r;
    cout << " AREA IS :: " << area << endl;

    return 0;
}
*/

// GLOBAL VARIABLE
/*
#include <iostream>
using namespace std;

int score = 15; // BAD PRACTICE

void a(int i)
{
    cout << "Score << " << score << endl;
    cout << ++i << endl;
}

void b()
{
    cout << "Score << " << score << endl;
}

int main()
{
    int i = 5;
    a(5);
    b();
    {
        int i = 2;
        cout << i << endl;
    }
    cout << i << endl;

    cout << "Score << " << score;
    return 0;
}
*/

// INLINE FUNCS
/*
#include <iostream>
using namespace std;


inline int getmax(int &a,int& b)
{

    return (a > b) ? a : b;

}

int main()
{
    int a = 1, b = 2;

    int ans;

    cout<<getmax(a,b)<<endl;

    a = a + 3;
    b = b + 1;

    cout<<getmax(a,b)<<endl;

    return 0;
}
*/

// DEFAULT ARGS

#include <iostream>
using namespace std;

void print(int arr[], int n,/*Default*/ int start = 0 /*args*/)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 4, 7, 8, 9};
    int size = 5;
    print(arr, size);
    cout<<endl;
    print(arr, size, 2);
}