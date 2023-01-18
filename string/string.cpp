#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main ()
{

   char src[50], dest[50];
 
   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");
 
   strncat(dest, src, 3);    // 使用strcat時，愈串接的字串容器要能夠裝上後面要串的內容 (size要夠)
 
   printf("%s\n", dest); // 兩種列印方法都可以
   cout<<dest<<endl;
   


/*   char src[] = "123";
  char dest[] = "abcdefg";
  cout<<"beofre: "<<src<<endl;
  memcpy(dest+1, src, 3);
  cout<<"after : "<<dest<<endl; */


 


   return(0);
}