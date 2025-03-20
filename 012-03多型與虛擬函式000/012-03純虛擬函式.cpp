//============================================================================
// Note : 
// 1. 當該類別有『純虛擬函式』，則此類別無法被宣告 
// 2. 當父類別有純虛擬函式(此專案中CShape有此函式)，『則子類別的虛擬函示必須Over Ride父類別的純虛擬函式』，否則子類別也會變成抽象類別導致無法宣告
// 3. 承上述，反觀若子類別沒有over ride，則子類別繼承了父類別的純虛擬函式，所以子類別也變成抽象類別，也就無法宣告
// 4. 純虛擬函式的機制，其實是強迫子類別over ride父類別的純虛擬函式
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
