#include<iostream> 
using namespace std;

class A
{
public:
    void print(){printC();}
    virtual void printC() {cout << "AA" << endl;}
};


class B : public A
{
public:
    void print()
    {
        A::print();
        cout << "BB" << endl;
    }

    virtual void printC() override {cout << "CC" << endl;}

};

class C : public A{

public:
    void print()
    {
        A::print();
        cout << "DD" << endl;
    }

    virtual void printC() override {cout << "EE" << endl;}
};

/*
不用多型的結果：因為printC()沒使用多型，所以B和C在重複使用A::print()時，
A::print()裡的printC()一樣是A::printC()，即使B和C有redefinition printC()，
A仍無法存取B和C的printC()，只能存取A::printC()。

用多型的結果：因為printC()有使用多型，所以B和C在重複使用A::print()時，
A::print()裡的printC()會判斷是A::printC(), B::printC(), C::printC()。
如果是B呼叫A::print()，則printC()為B::printC()。
*/
int main() 
{
    A a;
    a.print(); // output : AA
    cout << "-------" << endl;

    B b;
    b.print(); // output : CC、BB
    cout << "-------" << endl;

    C c;
    c.print(); // output : EE、DD

    return 0;
}