/*
*  雖然 "add" 函式名稱有兩個，但透過引入不同參數達到多型的目的
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include <iostream>
using namespace std;

class Sum {
  public:
    int add(int num1,int num2){
      return num1 + num2;
    }
    int add(int num1, int num2, int num3){
      return num1 + num2 + num3;
    }
};

int main(void) {
   //Object of class Sum
   Sum obj;

   //This will call the second add function
   cout<<obj.add(10, 20, 30)<<endl; // Output : 60

   //This will call the first add function
   cout<<obj.add(11, 22)<<endl;           // Output : 33

   return 0;
}
