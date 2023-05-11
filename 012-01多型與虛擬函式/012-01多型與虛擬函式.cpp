//============================================================================
// 何謂多型? : 子類別的物件指派給父類別的指標或參考，呼叫父類別的成員涵式，但是執行子類別OverRide的內容，這就是多型的運用
// 虛擬涵式 : 使用虛擬涵式才能執行子類別的內容，否則涵式呼叫一律都是父類別的涵式成員
// PS : 要注意使用虛擬涵式一定要搭配解構涵式，否則編譯不會過 
//============================================================================
using namespace std;
#include <iostream>
#include "CShape.h"
#include "CCircle.h"
#include "CRectangle.h"
#include "CShape.cpp"
#include "CCircle.cpp"
#include "CRectangle.cpp"

/*
void showArea(CCircle * pcc){
	cout<<"The area is :" <<pcc->getArea()<<endl;
}
void showArea(CRectangle * pcr){
	cout<<"The area is :" <<pcr->getArea()<<endl;
}
*/
void showArea(CShape * pcr){
	cout<<"The area is :" <<pcr->getArea()<<endl;
}
int main() {
	
	/* Override 父類別宣告的虛擬函式*/
	CCircle c;
	c.setRadius(100);
	CShape * pcs = &c;
	CShape & rcs = c;
	pcs->showInfo(); // 31400 , 628
	rcs.showInfo();  // 31400 , 628
	CRectangle r;
	r.setValues(123, 456);
	pcs = &r;
	pcs->showInfo(); // 56088 , 1158
	

	CCircle cc;
	cc.setRadius(123);
	CRectangle cr;
	cr.setValues(12 , 3);
	showArea(&cc); // 47505.1
	showArea(&cr); // 36
	

	
	CCircle c;
	c.setRadius(100);
	CShape * pcs = &c;
	cout<<pcs->getArea()<<endl; // 31400
	CShape & rcs = c;
	cout<<rcs.getArea()<<endl;  // 31400
	CRectangle cr;
	cr.setValues(10, 8);
	cout<<cr.getArea()<<endl;   // 80
	

	/*
	CShape * array[5];
	array[0] = &c;
	array[1] = &cr;
	array[2] = new CCircle();
	array[3] = new CRectangle();
	cout<<array[0]->getArea()<<endl;
	cout<<array[1]->getArea()<<endl;
	cout<<array[2]->getArea()<<endl;
	cout<<array[3]->getArea()<<endl;
	*/

	/* 
	CShape cs;
	cout<<cs.getArea()<<endl; // 0 

	CCircle cc;
	cc.setRadius(10);
	cout<<cc.getArea()<<endl; // 314

	cs = cc; 				  // Only copy cc object to cs , when cc change values , cs doesn't change
	cout<<cs.getArea()<<endl; // 314
	cc.setRadius(100); 

	cout<<cc.getArea()<<endl; // 31400
	cout<<cs.getArea()<<endl; // 314
	 */
	return 0;
}
