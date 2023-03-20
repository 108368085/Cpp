//============================================================================

//============================================================================

#include <iostream>
using namespace std;
#include "Circle.h"

int main() {
	Circle c1;
	//c1.radius = 10;
	//c1.height = 5;
	c1.setRadius(-10);
	c1.setHeight(-5);
	cout<<c1.getArea()<<endl;
	cout<<c1.getGirth()<<endl;
	cout<<c1.getVolume()<<endl;

}
