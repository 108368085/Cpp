//============================================================================
// 每一個成員函式中都有一個隱含的指標 this。this可以指向呼叫此函式的物件，用來取存物件成員

//============================================================================
#include "myheader.h"
#include <iostream>
#include <cstring>
#include "stdio.h"
using namespace std;

int main() {
	Circle c;
	cout<<c.getRadius()<<endl; // 0

	Circle z(100);
	cout<<z.getRadius()<<endl; // 100

	Rectangle r(80,50);
	cout<<r.getLength()<<endl; // 80
	cout<<r.getWidth()<<endl;  // 50

	return 0;
}
