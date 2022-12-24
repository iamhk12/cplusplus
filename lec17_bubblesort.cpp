#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // for round 1 to n-1
        bool swapped=false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped=true;
            }

        }
        if(swapped==false)                   //Optimised code for sorted case
        {
            break;
        }
    }
    printarr(arr, n);
}

int main()
{
    int arr[5] = {6, 2, 4, 8, 10};
    bubblesort(arr, 5);

    int a[5] = {7, 1, 4, 3, 9};
    bubblesort(a, 5);
}