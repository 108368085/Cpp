//============================================================================
// Name        : 010.cpp
// Author      : �\�Υ�
// Version     :
// Copyright   : CPP Road
// Description : string in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
	s1 = "abcd";		 // 有三種初始給值方式
	string s2 = "ghij";  // 有三種初始給值方式
	string s3("klmn");	 //	有三種初始給值方式
	cout<<s1<<" "<<s2<<" "<<s3<<endl; // abcd ghij klmn
	cout<<s1[0]<<endl;   // a , 單獨列印s1第一個元素

	string * ps1;
	ps1 = &s1;
	string * ps2 = new string;
	*ps2 = "xyz";
	string * ps3 = new string("stu");
	cout<<*ps1<<" "<<*ps2<<" "<<*ps3<<endl; // abcd xyz stu
	*ps1 = "pqr";
	cout<<s1<<endl; // pqr

	return 0;
}
