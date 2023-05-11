#include <iostream>
#include <vector>
using namespace std;

int main( )
{

    vector<int> v{1,2,3,4,5,6,7,8,9,10}; //v被初始化成有10个元素

    /* 尋訪第一個方法 */
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] <<" ";
    }
   cout<<endl;

    /* 尋訪第二個方法 */
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); ++i) //用 "!=" 比較两个迭代器
    {
        cout << *i << " ";
    }
    cout<<endl;

    /* 尋訪第三個方法 */
    for (i = v.begin(); i < v.end(); ++i) //用 "<" 比較两个迭代器
    {
        cout << *i << " ";
    }
    cout<<endl;
        
   /* 尋訪第四個方法 */
    i = v.begin();
    while (i < v.end()) { //間隔一個输出
        cout << *i << " ";
        i += 2; // 随機訪問迭代器支持 "+= 整数" 的操作
    }
    cout<<endl;

	return 0;
}