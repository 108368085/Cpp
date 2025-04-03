#include <stdio.h>

int main()
{
    // 1. Const int *p
    // 解釋：p 是一個指向 const int 的指標，表示指標指向的內容不能被修改，但指標本身可以指向其他位置。
    // 等價寫法：int const *p（const 位置不同但意思一樣）
    const int x = 10;
    const int y = 20;
    const int *p = &x;  // 可以指向 x
    p = &y;             // 可以改變指向的地址
    *p = 30;            // ❌ 錯誤！無法修改 p 指向的值

    // 2. int * const a
    // 解釋：a 是一個常數指標，表示指標本身不可改變指向的地址，但可以修改指向的值。
    int x = 10;
    int y = 20;
    int * const a = &x;  // a 必須初始化
    *a = 30;             // ✅ 可以修改指向的值
    a = &y;              // ❌ 錯誤！無法更改 a 的指向
}