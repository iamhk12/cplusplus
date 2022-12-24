// Book Allocation problem
#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    cout << "IN possible" << endl;
    int studcount = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
                cout << "ps" << pagesum << endl
         << "\n";
        }
        else
        {
            studcount++;
            if (studcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum=arr[i];
        }
        
    }

    cout << "POssible hy" << endl;
    return true;
}

int bookall(int arr[], int n, int m)
{
    cout << "In bookall " << endl;
    int s = 0;
    int sum = 0;
    int ans = -1;

    for (int i = 0; i < m; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    cout << "Mid is " << mid << endl;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
            cout << "end is" << e << endl;
        }
        else
        {

            s = mid + 1;
            cout << "start is" << s << endl;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int i = bookall(arr, 2, 4);
    cout << i;
}


