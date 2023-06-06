//============================================================================
// Note : 當父類別有虛擬函式(CShape)，子類別必須Over Ride，否則子類別也會變成抽象類別導致無法宣告
//============================================================================

#include <iostream>
using namespace std;
#include "CShape.h"
#include "CCircle.h"
#include "CRectangle.h"
#include "CShape.cpp"

int main() {
	CCircle cc;
	cout<<"OK"<<endl;

	return 0;
}
