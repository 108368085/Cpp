#include <iostream>
// #include <string>
#include "Circle.h"
using namespace std;

int main() {
	Circle c1;
	string myNAME = "Lion";
	cout<<myNAME<<endl;			// Lion
	// c1.radius = 10;
	// c1.height = 5;
	c1.setRadius(-10);
	c1.setHeight(-5);
	c1.setName("CTiger");
	cout<<c1.getName()<<endl;   // CTiger
	cout<<c1.getArea()<<endl;   // 3.14159
	cout<<c1.getGirth()<<endl;  // 6.28318
	cout<<c1.getVolume()<<endl; // 3.14159
	
	
}