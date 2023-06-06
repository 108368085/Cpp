#include <iostream>
 
using namespace std;
 
class Line
{
   public:
      int getLength( void );
      Line( int len );             // 構造函數
      Line( const Line &aaa);      // 構造函數
      ~Line();                     // 析構函數
 
   private:
      int *ptr;
};
 

Line::Line(int len) // 構造函數
{
    cout << "调用構造函數" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}
 
Line::Line(const Line &aaa)
{
    cout << "為指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *aaa.ptr; // 賦予值
}
 
Line::~Line(void)
{
    cout << "釋放内存" << endl;
    delete ptr;
}
int Line::getLength( void )
{
    return *ptr;
}
 
void display(Line obj)
{
   cout << "line 大小 : " << obj.getLength() <<endl;
}
 

int main( )
{
   Line line(10);
 
   display(line);
 
   return 0;
}