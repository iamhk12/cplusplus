// REF VARIABLE
/*
#include <iostream>
using namespace std;

int &func(int a) // BAD practice //
{
    int num = a;
    int &ans = num;
    return ans;
}

int *fun(int n)
{

    int *ptr = &n;
    return ptr;
}

void update(int n)
{
    n++;
}

void update2(int &n)
{
    n++;
}

int main()
{
    int i = 5;

    int &j = i; // Creating ref variable

    cout << "i== " << i << endl;

    cout << "j== " << j << endl;

    cout << "i++== " << i++ << endl;

    cout << "j++== " << j++ << endl;

    cout << "j== " << j << endl;

    cout << endl
         << endl;

    int n = 5;
    cout << "Before:" << n << endl;
    update2(n);
    cout << "after:" << n << endl;

    func(n); // warning
    fun(n);  // warning

    return 0;


}
*/

// Heap memory
/*
#include <iostream>
using namespace std;

int main()
{
    char ch='q';
    cout<<sizeof(ch)<<endl;

    char *c=&ch;
    cout<<sizeof(c)<<endl;
}
*/
//variable size array
/*
#include <iostream>
using namespace std;

int getsum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    cout << endl;
    int *arr = new int[n];
    if (n != 0)
        cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getsum(arr, n);

    cout << "Answer is " << ans;

    cout << endl;
}
*/

#include <iostream>
using namespace std;

int main()
{
    int *i = new int;
    int *arr = new int[50];
    delete i;
    delete []arr;
}