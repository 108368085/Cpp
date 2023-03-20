/*
 * CCircle.cpp
 *
 *  Created on: 2021�~11��26��
 *      Author: yuyun
 */
#include "iostream"
using namespace std;
#include "CCircle.h"

CCircle::CCircle() {
	// TODO Auto-generated constructor stub
	radius = 0;


}

CCircle::~CCircle() {
	// TODO Auto-generated destructor stub
}

void CCircle::showInfo() { //Override 父類別宣告的虛擬函式
	cout<<"CCircle's area : "<< getArea() <<endl;
	cout<<"CCircle's girth : "<< getGirth() <<endl;

}
