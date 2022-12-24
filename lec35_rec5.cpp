// Merge sort
#include <iostream>
using namespace std;

void printarr(int arr[], int s, int e)
{

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int arr[], int s, int e)
{
    cout << "In merge : \n"
         << "s=> " << s << "  e=> " << e << endl;
    printarr(arr, s, e);
    cout << endl;

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    cout << "len1== " << len1 << " len2== " << len2 << endl;
    // copy values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }
    cout << "First: ";
    printarr(first, 0, len1 - 1);
    cout << "Second: ";
    printarr(second, 0, len2 - 1);

    // merge 2 sorted arr
    int index1 = 0;
    int index2 = 0;
    k = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    cout << "In mergesort: \n"
         << "s=> " << s << "  e=> " << e << endl
         << "arr=> ";
    printarr(arr, s, e);
    int mid = (s + e) / 2;
    cout<<"Mid:: "<<mid<< endl<<endl;
    // base case
    if (s >= e)
        return;

    // left part
    mergeSort(arr, s, mid);

    // right part
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}

int main()
{

    int arr[6] = {0, 1, 4, 3, 5, 2};
    int n = 6;

    mergeSort(arr, 0, n - 1);
    cout << "\n";

    cout << "Final ans:: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    return 0;
}