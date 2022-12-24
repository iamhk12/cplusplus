// Rotate an array
/*
    #include <iostream>
    #include <vector>
    using namespace std;

void print(vector<int> v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void rotate(vector<int> a, int k)
{
   vector<int>temp(a.size());
   for(int i=0;i<a.size();i++)
   {
    temp[(i+k)%a.size()]=a[i];
   }
   a=temp;
    print(a);
}
int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    cout << "Array before reverse: " << endl;
    print(v);

    cout<<"Enter m: ";
    int k;
    cin>>k;

    cout<<"Array after rotate: "<<endl;
    rotate(v,k);

}
*/
// Sorted rotated array
/*
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool check(vector<int>& a) {
        int count=0;
        for(int i=1;i<a.size();i++)
        {
            if(a[i-1]>a[i])
            {
                count++;
            }

        }
        if(a[a.size()-1]>a[0])
            {
                count++;

            }
            return count<=1;
    }

int main()
{
    vector<int> v;

    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    cout << "Array before reverse: " << endl;
    print(v);

    cout<<boolalpha<<check(v); //boolalpha displays true /false

}*/

// Sum of two arrays
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

vector<int> reverse(vector<int> v)
{

    int s = 0;
    int e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> sumofarr(vector<int> &a, int n, vector<int> &b, int m)
{

    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }

    // second case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    return reverse(ans);
}

int main()
{
    vector<int> v;
    vector<int> w;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << "Array 1: " << endl;
    print(v);

    w.push_back(1);
    w.push_back(2);
    w.push_back(3);
    w.push_back(4);
    w.push_back(5);
    cout << "Array 2:" << endl;
    print(w);
    cout << endl;
    print(sumofarr(v, 5, w, 5));
}
