//Insertion sort


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

void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
    printarr(arr, n);
}

int main()
{
    int arr[5] = {6, 2, 4, 8, 10};
    insertionsort(arr, 5);

    int a[4] = {4,12,11,20};
    insertionsort(a, 4);
}