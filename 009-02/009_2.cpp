
#include <iostream>
#include <cstring>
using namespace std;
#include "Circle.h"
int main() {

	/* 
	Circle * pc1;
	Circle * pc2 = new Circle;

	pc1 = new Circle();         //加了一個小括號也是合法建立物件的方式

	cout<<pc1<<endl;
	cout<<pc2<<endl;
	cout<<"--------------------"<<endl;

	delete pc2;
	pc2 = pc1;
	cout<<pc1<<endl;
	cout<<pc2<<endl;
	cout<<"--------------------"<<endl;

	Circle c;
	Circle * pc3 = &c;
	cout<<&c<<endl;   // 0x61fde0 , 此兩種方式都是連結到同一個物件的記憶體位址
	cout<<pc3<<endl;  // 0x61fde0 , 此兩種方式都是連結到同一個物件的記憶體位址
	cout<<"--------------------"<<endl;
	 */

	/* 
	Circle * pc1 = new Circle();
	pc1->radius = 10;
	cout<<pc1->getGirth()<<endl; // 62.8318
	cout<<pc1->getArea()<<endl;  // 314.159

	Circle c;
	c.radius = 10;

	int i = pc1->compare2(&c);
	cout<<i<<endl; // 0

	Circle * pc2 = new Circle();
	pc2->radius = 30;
	int i2 = pc1->compare2(pc2);
	cout<< i2 << endl; // -1
	cout<< pc2->radius <<endl;  // 100 , 因在compare2裡面已將丟進去的radius設為100

	int i3 = pc1->compare2(new Circle());
	cout<< i3 <<endl;   // 1
	 */
	

    
	Circle * pc1 = new Circle();
	pc1->radius = 10;

	Circle c;
	c.radius = 123;
	pc1->copy2(&c);
	cout<<c.radius<<endl; 	 // 10

	Circle * pc2 = new Circle();
	pc1->copy3(pc2);
	cout<<pc2->radius<<endl; // 10

	Circle * pc3 = new Circle();
	int i = pc1->compare2(pc1->copy3(pc3));
	cout<<i<<endl;           	 // 0
	cout<<pc1->getAlden()<<endl; // 714384 , PS：88*66*123=714384

	delete pc1;
	delete pc2;
	delete pc3;
	
	return 0;
}
