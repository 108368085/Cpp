#include<iostream> 
using namespace std;

class A
{
public:
    void print(){printC();}
    void printC() {cout << "AA" << endl;}
};

class B : public A
{
public:
    void print()
    {
        A::print();
        cout << "BBBBB" << endl;
    }

    void printC()  {cout << "CCCCC" << endl;}
};

class C : public A
{
public:
    void print()
    {
        A::print();
        cout << "BBBBB" << endl;
    }

    void printC()  {cout << "DDDD" << endl;}
};

int main() 
{
    A a;
    a.print(); // output : AA
    cout << "-------" << endl;

    B b;
    b.print(); // output : AA、BBBBB
    cout << "-------" << endl;

    C c;
    c.print(); // output : DDDD、BBBBB

    return 0;
}