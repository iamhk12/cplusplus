#include <iostream>
#include <cstring>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;
    char *name;
    static int timetocomplete;

    Hero()
    {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    // copy constructor
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        // copy constructor
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    static int random()
    {
        return timetocomplete;
    }

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }

    void setname(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "Name: " << this->name << ", ";
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << ". ";
        cout << endl
             << endl;
    }

    ~Hero()
    {
        cout << "Destructor called" << endl;
    }
};

int Hero::timetocomplete = 5;

int main()
{
    // cout << Hero::timetocomplete << endl;

    cout << Hero::random() << endl;

    /*
    cout << Hero::timetocomplete << endl;
    Hero a;
    cout << a.timetocomplete << endl;

    Hero b;
    b.timetocomplete = 10;
    cout << a.timetocomplete << endl;
    cout << b.timetocomplete << endl;

    cout << "HI" << endl;
    Hero ramesh(80);
    cout << "Address of ramesh == " << &ramesh << endl;
    ramesh.print();
    cout << "Heloo" << endl;

    Hero *h = new Hero(11, 'X');
    h->print();
    ramesh.level = 'A';
    cout << ramesh.getlevel() << endl;

    Hero temp(19, 'C');
    temp.print();

    static allocation
        Hero a;
    a.setlevel('A');
    a.sethealth(90);
    cout << "Level of a is " << a.level << endl;
    cout << "Health of a is " << a.gethealth() << endl;

    dynamic allocation
        Hero *b = new Hero;

    b->setlevel('B');
    b->sethealth(70);
    cout << "Level of b is " << (*b).level << endl;
    cout << "Health of b is " << (*b).gethealth() << endl;

    Hero ramesh;
    cout << "size of ramesh == " << sizeof(ramesh) << endl;
    ramesh.health = 70;
    ramesh.level = 'A';

    cout << "Health is " << ramesh.health << endl;
    cout << "Level is " << ramesh.level << endl;

    cout << "ramesh.gethealth()== " << ramesh.gethealth() << endl;
    ramesh.sethealth(10);
    cout << "ramesh.sethealth(10)&ramesh.gethealth()==  " << ramesh.gethealth() << endl;

    return 0;

    Hero S(70, 'C');
    S.print();

    // copy constructor
    Hero R(S);
    R.print();

    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[15] = "abcd";
    hero1.setname(name);

    hero1.print();

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'X';
    hero1.print();
    hero2.print();

    hero1 = hero2;
    cout << "hero1== ";
    hero1.print();
    cout << "hero2== ";
    hero2.print();

    // static
    Hero a;

    // dynamic
    Hero *b = new Hero();

    // manual call for destuctor
    delete b;
    */
    return 0;
}