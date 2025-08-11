#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

typedef struct queue {
    node *head;
} queue;

void swap1(queue *q1, queue *q2) {
    q1->head = q2->head;           // q1->head 和 q2->head 指向同一個節點
    q2->head->value = 300;         // 改變 q2->head->value，q1->head->value 也會改
}

void swap2(queue *q1, queue *q2, queue *q3) {
    q1->head = q2->head->next;     // q1->head 指向 q2 的第二個節點
    q2->head->next = q3->head;     // 改變 q2 第一個節點的 next 指向 q3->head
}

node* create_node(int val) {
    node* n = (node*)malloc(sizeof(node));
    n->value = val;
    n->next = NULL;
    return n;
}

int main() {
    queue q1, q2, q3;

    // q2: head(100) -> (200)
    q2.head = create_node(100);
    q2.head->next = create_node(200);

    // q3: head(500)
    q3.head = create_node(500);

    // q1: head(999)
    q1.head = create_node(999);

    printf("初始狀態:\n");
    printf("q1->head->value = %d\n", q1.head->value); // 999
    printf("q2->head->value = %d\n", q2.head->value); // 100
    printf("q3->head->value = %d\n", q3.head->value); // 500

    printf("\n執行 swap1(q1, q2):\n");
    swap1(&q1, &q2);
    printf("q1->head->value = %d (會跟 q2 同步變成 300)\n", q1.head->value); // 300
    printf("q2->head->value = %d\n", q2.head->value); // 300

    // 還原 q1
    q1.head = create_node(999);

    printf("\n執行 swap2(q1, q2, q3):\n");
    swap2(&q1, &q2, &q3);
    printf("q1->head->value = %d (原本是 200，不會自動變成 q3 的 500)\n", q1.head->value); // 200
    printf("q3->head->value = %d\n", q3.head->value); // 500

    return 0;
}
