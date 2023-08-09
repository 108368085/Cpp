//============================================================================
/*	private  : 只允許本類別的成員函數存取 , 不允許子類別存取
	protected: 只允許本類別與子類別的成員函數存取
	public   : 可讓物件可以碰的 	*/
//============================================================================

#include <iostream>
using namespace std;
#include "myheader.h"

class Foo1 {  
public:  
  virtual void show() { // 虛擬函式  
    cout << "Foo1's show" << endl;  
  }  
};  
  
class Foo2 : public Foo1 {  
public:  
  virtual void show() { // 虛擬函式  
    cout << "Foo2's show" << endl;  
  }  
};  
  
void showFooByPtr(Foo1 *foo) {  
  foo->show();  
}  
  
void showFooByRef(Foo1 &foo) {  
  foo.show();  
}  
  

int main() {

	/*
	 	Pratice Part 1 
	 */
	Circle c1;
	c1.setRadius(10);
	cout<<c1.getArea()<<endl;   // 314
	cout<<c1.getGirth()<<endl;	// 62

	Rectangle r1;
	cout<<r1.getArea()<<endl;	// 10
	cout<<r1.getGirth()<<endl;	// 10

	Shape s1;
	// s1.area = 100;		 	// Error
	// s1.test_Protected = 100; // Error

	/* 
		Pratice Part 2 
	*/
	Foo1 f1;  
	Foo2 f2;  
	Foo1 *f1Ptr=&f2;  
	
	// 動態繫結  
	cout << "[Info] Show Foo By Ptr:" << endl;  
	showFooByPtr(&f1);   // Foo1's show
	showFooByPtr(&f2);   // Foo2's show
	showFooByPtr(f1Ptr); // Foo2's show
	cout << endl;  
	
	// 動態繫結  
	cout << "[Info] Show Foo By Ref:" << endl;  
	showFooByRef(f1);  // Foo1's show
	showFooByRef(f2);  // Foo2's show
	cout << endl;  
	
	// 靜態繫結  
	cout << "[Info] Show Foo By Object:" << endl;  
	f1.show();  // Foo1's show
	f2.show();  // Foo2's show
	cout << endl;  

	return 0;
}
