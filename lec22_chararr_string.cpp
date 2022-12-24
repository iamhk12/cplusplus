/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char name[20];

    cout<<"Enter your name: "<< endl;
    cin>>name;                        //Himanshu
    //if u put null character in arr the output will be 'Hi'
    //name[2]='\0';

    cout<<"Your name is: ";           //Himanshu
    cout<< name<< endl;

    return 0;


}
*/

// Length of string
/*
#include <iostream>
#include <vector>
using namespace std;

int lengthofstr(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()

{
    char name[20];

    cout << "Enter your name: " << endl;
    cin >> name; // Himanshu

    cout << "Your name is: "; // Himanshu
    cout << name << endl;

    cout << "Length of the string is : " << lengthofstr(name) << endl;

    return 0;
}
*/

// Reverse a string
// E.g.: HELLO ==> OLLEH
/*
#include <iostream>
using namespace std;

int lengthofstr(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void revstr(char name[], int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
    cout<<name;
}

int main()
{
    char name[20];

    cout << "Enter your name: " << endl;
    cin >> name; // Himanshu

    cout << "Your name is: "; // Himanshu
    cout << name << endl;

    revstr(name,lengthofstr(name));
}
*/
/*
// Check if palindrome

#include <iostream>
#include <string>
using namespace std;

//CONDTION

char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = tolower(ch);
        return temp;
    }
}

int lengthofstr(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool checkpal(char a[])
{
    int s = 0;
    int n = lengthofstr(a);
    int e = n - 1;

    while (s <= e)
    {
        if (tolowercase(a[s]) != tolowercase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char name[20];

    cout << "Enter your name: " << endl;
    cin >> name; // Himanshu
    cout << "Length is : " << lengthofstr(name) << endl;

    cout << "Your name is: "; // Himanshu
    cout << name << endl;
    //Chekcing palindrome is not case sensitive
    if(checkpal(name))
    cout<<"Palindrome "<<endl;
    else
    cout<<"NOT palindrome"<<endl;

    cout << "CHARACTER IS " << tolowercase('b') << endl;
    cout << "CHARACTER IS " << tolowercase('B') << endl;
}

//Basic string
/*
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    s.pop_back();
    cout<<s<<endl;
    s.push_back('c');
    cout<<s<<endl;
    cout<<s.length();
}
*/
/*
// Valid Palindrome                                 //Faltu character hatana hy
// sab lower case to
// fir palindrome check
#include <iostream>
#include <string>
using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a') && (ch <= 'z') || (ch >= 'A') && (ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
    {
        return ch;
    }
    else
    {
        char temp = tolower(ch);
        return temp;
    }
}
bool checkpal(string a)
{
    int s = 0;
    int e = a.length() - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
bool ispalindrome(string s)
{
    // Faltu character hatao
    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = tolowercase(temp[j]);
    }

    cout << temp << endl;
    ;
    return checkpal(temp);
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    if (ispalindrome(s))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
}
*/
/*  HOMEWORK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//Reverse Words
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "A man, a plan, a canal: Panama";

}
*/

// Maximum occuring character
/*
#include <iostream>
#include <string>
using namespace std;
char getmaxocc(string s)
{
    int arr[26] = {0};
    int number;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans='a'+ans;
    return finalans;
}

int main()
{
    string s;
    cin >> s;
    cout<<getmaxocc(s);
}
*/

// remove spaces and add "@40"
// E.g: I/P ->  My name is Khan
// O/P -> My@40name@40is@40Khan
/*
#include <iostream>
#include <string>
using namespace std;

string replacespace(string s)
{
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}

int main()
{
    string s;
    getline(cin,s);

    cout<<replacespace(s);
}
*/

// Remove occurence of substring
// I/P ->  s= daabcbaabcbc | part=abc
// expected output ==> dab
/*
#include <iostream>
#include <string>
using namespace std;

string removeoccsubstr(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    cout << endl;

    string part;
    cout << "Enter part: ";
    getline(cin, part);
    cout << endl;

    cout << removeoccsubstr(s, part);
}
*/

// Permutation in string
/*ques::
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Input: s1 = "ab", s2 = "eidboaoo"
Output: false
Explanation: s2 contains one permutation of s1 ("ba").*/

/*
#include <iostream>
#include <string>
using namespace std;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}
bool perm(string s1, string s2)
{
    int count1[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    // traverse s2 string in window of size s1 length and comppare

    int i = 0;
    int count2[26] = {0};
    int windowsize = s1.length();
    // running for first window
    while (i < windowsize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (checkEqual(count1, count2))
        return 1;

    while (i < s2.length())
    {
        char newchar = s2[i];
        int index = newchar - 'a';
        count2[index]++;

        char oldchar = s2[i - windowsize];
        index = oldchar - 'a';
        count2[index]--;
        i++;

        if (checkEqual(count1, count2))
            return 1;
    }
    return 0;
}

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    cout << endl;

    string part;
    cout << "Enter part: ";
    getline(cin, part);
    cout << endl;

    cout << boolalpha << perm(part, s);
}
*/

// Remove adjacent duplicates of a string
// Input: s = "azxxzy"
// expected Output: "ay"
//-----------------------------------------INCOMPLETE
/*
#include <iostream>
#include <string>
using namespace std;
//wrong one

string removeduplicates(string s)
{
    string temp = "";
    int i = 0;
    while (s.length() != 0)
    {
        while (i < s.length())
        {
            if (s[i] != s[i + 1] || s[i] == s.back())
            {
                temp.push_back(s[i]);
                s.erase(i);
                i++;
            }
            else if (s[i] == s[i + 1])
            {
                s.erase(i);
                i = i + 2;
            }
        }
    }
    return temp;
}
//correct one
string removeduplicates(string s)
{
    int i = 0;
    while (i < s.length())
    {
        if (s[i] != s[i + 1])
        {
            i++;
            //cout << "not equal " << s << endl;
        }
        else if (s[i] == s[i + 1])
        {

            s.erase(i, 2);
            if (i > 0)
            {
                i--;
            }
            //cout << "equal " << s << endl;
        }
    }
    return s;
}

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    cout << endl;
    cout << removeduplicates(s);
}
*/
//String compression
//////

/////


//////on leetcode