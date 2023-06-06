/*
 * CCircle.cpp
 *
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

void CCircle::showInfo() {
	cout<<"CCircle's area : "<< getArea() <<endl;
	cout<<"CCircle's girth : "<< getGirth() <<endl;

}
