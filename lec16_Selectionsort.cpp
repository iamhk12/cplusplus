//Selection Sort

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

void selectsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minind = i;
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (arr[minind] > arr[j])
                minind = j;
        }
        swap(arr[minind], arr[i]);
    }
    printarr(arr, n);
}

int main()
{
    int arr[5] = {6, 2, 4, 8, 10};
    selectsort(arr, 5);

    int a[5]={7,1,4,3,9};
    selectsort(a,5);
}