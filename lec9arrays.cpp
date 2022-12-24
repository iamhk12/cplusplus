// Basic
/*
#include <iostream>
using namespace std;
int main()
{
    // declare
    int number[10];
    //To fill all values in array
    //fill_n(number,10,1);
    cout << "value at index 0 .: " << number[9] << endl;
    cout << "Everything is fine" << endl
         << endl;
    return 0;
}
*/

// Playing with arrays
/*
#include <iostream>
using namespace std;

int main()
{
    // declare
    int number[15];

    // accessing an array
    cout << "Value at 14 index " << number[14] << endl;

    // initialising an array
    int second[3] = {5, 7, 11};
    cout << endl;
    // accesing an element
    // accesing an array ==>  array_name[index]
    cout << "Value at 2 index " << second[2] << endl;

    cout << endl
         << "Everything is fine" << endl
         << endl;

    int third[15] = {15, 7}; // Sirf 0,1 pe 15,7 aayega baaki sab zero

    int n = 15;

    // Print an whole array
    cout << "Printing the array";
    for (int i = 0; i < n; i++)
        cout << " " << third[i];

    // initialising all locations with 0
    int fourth[10] = {0};
    n = 10;
    cout << endl
         << "Printing the array ";
    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << fourth[i] << " ";
    }
    return 0;
}
*/

// same program as above but with print array func.
/*
#include <iostream>
using namespace std;

// HOLD
void coutArr(int arr[], int size) // IMP:: Always mention size of array
{
    cout << " printing the array " << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << " printing DONE" << endl
         << endl;
}

int main()
{
        int number[15];

        cout << "Value at 14 index " << number[14] << endl;

        int second[3] = {5, 7, 11};
        cout << endl;
        cout << "Value at 2 index " << second[2] << endl;

        cout << endl
             << "Everything is fine" << endl
             << endl;

        int third[15] = {15, 7};
        coutArr(third, 15);

        cout << "Size of third is " << sizeof(third) / sizeof(int) << endl
             << endl;

        int fourth[10] = {0};
        coutArr(fourth, 10);

        cout << "Size of fourth is " << sizeof(fourth) / sizeof(int);

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[4];
    cout << "printing the array" << endl;
    // print the array

    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << "printing DONE" << endl;

    double firstdouble[5];
    float firstfloat[13];
    bool firstbool[5];

    return 0;
}
*/

// Array min max
/*
#include <iostream>
#include <climits>
using namespace std;

int getmax(int num[],int size)
{
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}

int getmin(int num[],int size)
{
    int min = INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
}

int main()
{
int size;
cin>>size;

int num[100];

//taking array input
for(int i=0;i<size;i++)
{
cin>>num[i];
}

cout<<"Maximum value is "<< getmax(num,size)<<endl;
cout<<"Minimum value is "<< getmin(num,size);
}
*/

//
/*
#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "Inside the function" << endl;
    arr[0]=120;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "going back to main" << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);

        for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
}
*/

// Linear Search
/*
#include <iostream>
using namespace std;

bool search(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    cout << "Enter the number needed to be searched:: ";
    int x;
    cin >> x;

    int arr[10] = {5, 7, 2, 3, 42, 51, -20, -9, 0, 1};

    bool a = search(arr, 10, x);
    if (a)
    {
        cout << "Number is present" << endl;
    }
    else
    {
        cout << "Number is not present" << endl;
    }
}
*/

// Reverse an array
/*
#include <iostream>
using namespace std;

void arrrev(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {9, 8, 7, 6, 5, 4};
    int i[7] = {1, 2, 3, 4, 5, 6, 7};

    arrrev(arr, 6);
    arrrev(i,7);

    printarr(arr,6);
    printarr(i,7);
}
*/