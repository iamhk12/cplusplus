// First and last occurce of a key
/*
#include <iostream>
using namespace std;

int firstoccur(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (arr[mid] > key)
        {

            e = mid - 1;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastoccur(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (arr[mid] > key)
        {

            e = mid - 1;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arz[6] = {0, 5, 5, 6, 6, 6};
    int arx[8] = {0, 1, 1, 1, 2, 2, 2, 2};
    int arc[1] = {2};

    cout << "index of first occurence of 6 is " << firstoccur(arz, 6, 6) << endl;
    cout << "index of last occurence of 6 is " << lastoccur(arz, 6, 6) << endl;
    cout << endl;

    cout << "index of first occurence of 2 is " << firstoccur(arx, 8, 2) << endl;
    cout << "index of last occurence of 2 is " << lastoccur(arx, 8, 2) << endl;
    cout << endl;

    cout << "index of first occurence of 2 is " << firstoccur(arc, 1, 2) << endl;
    cout << "index of last occurence of 2 is " << lastoccur(arc, 1, 2) << endl;
    cout << endl;
}
*/

// Find total no. of occurence
/*
total no. of occurence = (lastoccurindex - firstoccurindex)+1

*/

// Peak index in mountain array
#include <iostream>
using namespace std;

int peakmoun(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {

        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[7] = {3, 4, 5, 6, 7, 3, 1};
    cout << peakmoun(arr, 7);
}
