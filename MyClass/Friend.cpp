/* 
友元函數可以訪問該類的任何成員 (包刮private) 
*/

#include <iostream>
 
using namespace std;
 
class Box
{
   double width;
public:
   friend void printWidth( Box box );
   void setWidth( double wid );
};
 

void Box::setWidth( double wid )
{
    width = wid;
}
 
// 請注意：printWidth() 不是任何类的成员函数
void printWidth( Box obj )
{
   /* 因為 printWidth() 是 Box 的友元，它可以直接訪問該類的任何成员 */
   cout << "Width of box : " << obj.width << endl;
}
 

int main( )
{
   Box box;
 
   // 使用成員函數設置寬度
   box.setWidth(10.0);
   
   // 使用友元函數印出寬度
   printWidth( box );
 
   return 0;
}