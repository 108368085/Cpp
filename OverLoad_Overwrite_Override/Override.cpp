#include <stdio.h>
#include <iostream> 
using namespace std;

/*
1. 不同的作用域（分别位于主類與基類）；
2. 函數名字相同
3. 參數相同
4. 主類函數必須有virtual
*/

#include <stdio.h>
#include<iostream> 
using namespace std;

class Base
{
public:
	virtual void Print() // 父類虚函數
	{
		printf("This is Class Base!\n");
	}
};

class Derived : public Base
{
public:
	virtual void Print() override // 子類虚函數，重寫了父類的虚函數
	{
		printf("This is Class Derived!\n");
	}
};

int main()
{
	Base Cbase; 	  // 父類对象
	Derived Cderived; // 子類对象
	Cbase.Print();
	Cderived.Print();

	cout << "---------------" << endl;
    Base *p1 = &Cderived; // 父類指针指向子類 
	Base *p2 = &Cbase; 	  // 父類指针指向父類	
	p1->Print(); 
	p2->Print();
}

/*
輸出结果：
This is Class Base!
This is Class Derived!
---------------
This is Class Derived!
This is Class Base!
*/