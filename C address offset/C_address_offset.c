#include <stdio.h>
#include <stddef.h>

// 定義 __OffsetOf 巨集
#define __OffsetOf(type, member) ((size_t)&(((type *)0)->member))

typedef struct {
    int a;
    char b;
    float c;
} MyStruct;

int main() {
    MyStruct obj = { .a = 123, .b = 'X', .c = 3.14f };

    // 取得 obj.b 的指標
    char *ptr = &obj.c;

    // 用你給的方式回推 struct 指標
    MyStruct *recovered = (MyStruct *)((long)ptr - __OffsetOf(MyStruct, c));

    // 驗證地址與內容
    printf("Original obj address          = %p\n", (void *)&obj);      // print : 000000000061FE04
    printf("b address                     = %p\n", (void *)ptr);       // print : 000000000061FE08
    printf("Calculate structure Address   = %p\n", (void *)recovered); // print : 000000000061FE04
    printf("recovered->a = %d\n", recovered->a);   // print : recovered->a = 123
    printf("recovered->b = %c\n", recovered->b);   // print : recovered->a = X
    printf("recovered->c = %.2f\n", recovered->c); // print : recovered->a = 3.14

    return 0;
}