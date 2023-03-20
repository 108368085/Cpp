/*
 * CRectangle.cpp
 *
 *  Created on: 2021�~11��27��
 *      Author: yuyun
 */

#include "CRectangle.h"
#include "iostream"
using namespace std;

CRectangle::CRectangle() {
	length = 0;
	width = 0;

}

CRectangle::~CRectangle() {
	// TODO Auto-generated destructor stub
}

void CRectangle::showInfo() {   // Override 父類別宣告的虛擬函式
	cout<<"CRectangle's area : "<< getArea() <<endl;
	cout<<"CRectangle's girth : "<< getGirth() <<endl;
}
