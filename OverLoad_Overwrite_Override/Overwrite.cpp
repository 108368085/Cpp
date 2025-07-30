#include<iostream> 
using namespace std;

class Base
{
public:
	Base(int x = 1) :value(x) {}

	void Print1() // 父類函數不是虚函數
	{
		cout << "Base Print1():" << 123 << endl;
	}

	virtual void print2() // 父類函數是虚函數
	{
		cout << "Base Print2():" << value << endl;
	}

	int value;
};

class Derived :public Base
{
public:
	Derived(int x = 2) :value(x) {}

	void Print1() 		// 函數同名，且参數相同，同時父類函數不是虚函數，構成“隱藏”
	{
		cout << "Derived Print1():" << value << endl;
	}

	void Print2(int a) // 函數同名，但是参数不同，無論父類函數是不是虚函數，也構成“隱藏”
	{
		cout << "Derived Print2():" << a << endl;
	}

	int value; // 子類成員數據，隐藏了子類的同名數據
};

int main()
{
	Derived Cderived;
	cout << Cderived.value << endl; // 调用子類的成員數據
	Base Bbase;
	Bbase.Print1();
	Cderived.Print1();  // 隐藏
	Cderived.Print2(1); // 隐藏

	Base *Cbase = &Cderived; // 父類的指针（或引用）指向（或引用）子類對象
	Cbase->Print1(); 		 // 將調用父類的同名函數（隐藏）

	Derived *d = &Cderived;  // 子類的指针（或引用）指向（或引用）子類對象
	d->Print2(10000);
	
}

/*
输出结果：
2
Base Print1():123
Derived Print1():2
Derived Print2():1
Base Print1():123
Derived Print2():10000
*/