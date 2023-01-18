//============================================================================
// Name        : 010.cpp
// Author      : �\�Υ�
// Version     :
// Copyright   : CPP Road
// Description : 010 �r�� 11 �d�� �����Ҧr���˴� - C++
//============================================================================

#include <iostream>
#include <string>
using namespace std;

#include "MyHeader.h"

int main() {
	cout<<"Please input the ID =>";
	string id;
	cin>>id;

	bool b = checkId(id);

	if(b){
		cout<<"Correct"<<endl;
	}else{
		cout<<"Wrong"<<endl;
	}


	return 0;
}
