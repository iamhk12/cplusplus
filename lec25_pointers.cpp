/*
#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << "Num is" << num << endl;

    // Adress of variable - &

    cout << "Address of num is: " << &num << endl;

    int *ptr = &num; // Pointer
    cout << "cout<<ptr is " << ptr << endl;
    cout << "cout<<*ptr is " << *ptr << endl;
    cout << endl;

    double d = 4.2;
    double *p2 = &d;
    cout << "Num is" << num << endl;
    cout << "cout<<p2 is " << p2 << endl;
    cout << "cout<<*p2 is " << *p2 << endl;
    cout << endl;

    cout << "size of int is " << sizeof(num) << endl;
    cout << "size of pointer ptr is " << sizeof(ptr) << endl;

    cout << "size of double is " << sizeof(d) << endl;
    cout << "size of pointer p2 is " << sizeof(p2) << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    // Pointer to int is created and pointing to some garbage address
    // int *p=0;

    // cout<<*p;

    int i = 5;

    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;

    p = &i;

    cout << p << endl;
    cout << *p << endl;

    return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int a = num;

    a++;

    cout <<"Before " <<num<<endl;
    int *p=&num;
    (*p)++;
    cout<<"After "<<num<<endl;
   

    int *q=p;                                            //COPYING A POINTER
    cout<<" P "<<p<<endl;
    cout<<" q "<<q<<endl;
    cout<<" *p "<<*p<<endl;
    cout<<" *q "<<*q<<endl;

    //IMP concept 
    int i=3;
    int *t=&i;
    //cout<<(*t)++<<endl;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"Before t=t+1  t:: "<<t<<endl;
    t=t+1;
    cout<<"After t=t+1  t:: "<<t<<endl;
    cout<<"Ater t=t+1   *t::"<<*t<<endl;
    cout<<"Value of i after t=t+1 :: "<<i<<endl;




    return 0;
}
