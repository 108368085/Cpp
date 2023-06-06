/*
 * CRectangle.cpp
 *
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

void CRectangle::showInfo() {
	cout<<"CRectangle's area : "<< getArea() <<endl;
	cout<<"CRectangle's girth : "<< getGirth() <<endl;
}
