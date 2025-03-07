#include <iostream>
 
using namespace std;
 
class Line
{
   public:
      void setLength( double len );
      double getLength( void );

      Line(int a) // 這是構造函數聲明
      {
        length = a;
      }          
   
      ~Line();    // 這是析構函數聲明
 
   private:
      double length;
};
 
// 成員函數定義，包括構造函數
// Line::Line(void)
// {
//     cout << "Object is being created" << endl;
// }

Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}
 
void Line::setLength( double len )
{
    length = len;
}
 
double Line::getLength( void )
{
    return length;
}

int main( )
{
   Line line(3);
 
   
//    line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;

   line.setLength(113.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}