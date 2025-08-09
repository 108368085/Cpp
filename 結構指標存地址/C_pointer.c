#include <stdio.h>

typedef struct Node 
{
    int data;
    struct Node *next;
} Node;

// 嘗試改指標本身（函式內的指標變數）
void changePointer(Node *node) 
{
    node = node->next; // 只改了副本，不會影響外部
}

// 改指標指向的內容（節點的欄位）
void changeContent(Node *n1, Node *n2) 
{
    if (n1 != NULL) 
    {
        n1->data = 999;
        n1->next = n2->next;
        n2->next = NULL;
    }
}

int main() {
    Node n1 = {1, NULL};
    Node n2 = {2, NULL};
    n1.next = &n2;

    printf("Before changePointer: n1.data = %d, n1.next = %p\n", n1.data, (void*)&n1);
    // Before changePointer: n1.data = 1, n1.next = 000000000061FE00
    changePointer(&n1);
    printf("After changePointer:  n1.data = %d, n1.next = %p\n", n1.data, (void*)n1.next);
    // After changePointer:  n1.data = 1, n1.next = 000000000061FE00  

    changeContent(&n1, &n2);
    printf("After changeContent:  n1.data = %d, n1.next = %p\n", n1.data, (void*)n1.next);
    // After changeContent:  n1.data = 999, n1.next = 0000000000000000

    return 0;
}

