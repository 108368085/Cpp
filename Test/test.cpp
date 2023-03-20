#include <iostream>
using namespace std;
 
class Box
{
   protected:
      double width;
};
 
class SmallBox:Box // SmallBox 是派生類
{
   public:
      void setSmallWidth( double wid );
      double getSmallWidth( void );
};
 
// 子類別的成員函數
double SmallBox::getSmallWidth(void)
{
    return  5 * width ;
}
 
void SmallBox::setSmallWidth( double wid )
{
    width = wid;
}
 
// 主函數
int main( )
{
   SmallBox box;
 
   // 使用成員函數設置寬度
   box.setSmallWidth(5.0);
   cout << "Width of box : "<< box.getSmallWidth() << endl;
 
   return 0;
}