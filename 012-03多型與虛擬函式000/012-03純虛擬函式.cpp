//============================================================================
// Note : 
// 1. 當父類別有純虛擬函式(此專案中CShape有此函式)，『則子類別的虛擬函示必須Over Ride父類別的純虛擬函式』，否則子類別也會變成抽象類別導致無法宣告
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
