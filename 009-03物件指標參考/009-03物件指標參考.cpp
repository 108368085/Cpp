
#include <iostream>
using namespace std;
#include "Circle.h"

int main() {

	/* 
	Circle c1;
	c1.radius = 10;
	Circle & rc1 = c1;          // 宣告參考的物件，需要立即指派一個物件當作參考
	cout<<rc1.getArea()<<endl;  // 314.159
	 */
	
	/* 
	Circle c1, c2;
	c1.radius = 10;
	c2.radius = 10;
	cout<<c1.compare(c2)<<endl; 	// 0
	cout<<c1.compare2(&c2)<<endl;   // 0
	cout<<c1.compare3(c2)<<endl; 	// 0 , 傳一個物件給參考 ， 讓傳NULL不會錯誤
	 */

	/* 
	int a = 10;
	int & b = a;   // 複習一下參考的使用方式
	cout<<b<<endl; // 10
	cout<<a<<endl; // 10 ,  PS : 參考會將原本的值也一起改變

	Circle c1,c2;
	c1.radius = 20;
	c1.copy4(c2);						   // 此函式將 c1的radius 給予 c2的radius
	cout<<c2.radius<<endl; 				   // 20 
	cout<<c1.compare3(c1.copy4(c2))<<endl; // 0
	 */
	
	

	/* 
	Circle * pc1 = new Circle();
	Circle & rc1 = *pc1;           // 將已存在的物件指派給參考，但是要注意不能傳遞位址(指標)，要傳遞值本身
	Circle c1;
	c1.radius = 10;
	pc1->radius = 10;
	cout<<c1.compare3(*pc1)<<endl; // 0
	 */


	/* 
	Circle * pc1 = new Circle();
	pc1->radius = 10;

	Circle *& rpc1 = pc1;        	 // 物件指標參考 : 將已存在的物件指派給參考，但是要注意不能傳遞位址(指標)
	rpc1->radius = 100;
	cout<<pc1->getArea()<<endl; 	 // 31415.9
	cout<<pc1->compare3(*pc1)<<endl; // 0
	 */


	/* 
	Circle c1;
	c1.radius = 10;
	Circle * pc1 = new Circle();
	pc1->radius = 20;
	pc1 = NULL;
	cout<<c1.compare4(pc1)<<endl;
	 */

	
	Circle c1;
	Circle * pc1 = new Circle();
	c1.radius = 10;
	cout<<c1.compare4(c1.copy5(pc1))<<endl; // 0
 	

	return 0;
}