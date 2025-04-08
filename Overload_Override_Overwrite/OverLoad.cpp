#include <stdio.h>
#include <iostream> 
using namespace std;

/*
1. 在同一作用域（例如在同一個類中）；
2. 函數名字相同
3. 参数不同
*/


int Add(int a, int b)
{
	return a + b;
}

float Add(float a, float b)
{
	return a + b;
}

int main()
{
	cout << Add(4, 5) << endl; 		 // 調用 int Add(int a,int b)
	cout << Add(2.5f, 3.7f) << endl; // 調用 float Add(float a,float b)

	return 0;
}

/*
输出结果：
9
6.2
*/