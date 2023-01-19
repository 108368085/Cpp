

#include <iostream>
#include <string>
using namespace std;

int main() {

	// int stoi (const string&  str, size_t* idx = 0, int base = 10);   PS:字串轉整數
	
	string s1 = "111aa222ab333";
	size_t st = 0;
	int x = stoi(s1, &st);
	cout<<st<<endl;    // 3 , st代表找到可以轉成數字的最後位置
	int y = stoi(s1.substr(st + 2), &st);
	cout<<x + y<<endl; // 333 , PS : 111+222=333
 	

	
	// string to_string (int val);   PS:整數轉字串

	string s2 = to_string(123);
	cout<<s2<<endl;         // 123
	string s3 = s2 + "@";   // 123@
	cout<<s3<<endl;
 	

	return 0;
}


