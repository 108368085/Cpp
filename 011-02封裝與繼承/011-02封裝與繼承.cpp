//============================================================================
/*	private  : 只允許本類別其他成員存取 , 不讓任何人碰的(不允許子類別存取) 
	protected: 可以讓子類別碰 
	public   : 可讓物件可以碰的 	*/
//============================================================================

#include <iostream>
using namespace std;
#include "myheader.h"

int main() {
	Circle c1;
	c1.setRadius(10);
	cout<<c1.getArea()<<endl;   // 314
	cout<<c1.getGirth()<<endl;	// 62

	Rectangle r1;
	cout<<r1.getArea()<<endl;	// 10
	cout<<r1.getGirth()<<endl;	// 10
	return 0;
}
