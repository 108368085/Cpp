/*
佇列是一種先進先出(FIFO)-First In First Out的資料結構。
針對這種資料結構，可以進行兩種行為:在queue中增加元素稱為enqueue，而在queue中取出元素則稱為dequeue。
此外，先enqueue進queue中的元素，會先被dequeue出來。
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define EMPTY (-1)
#define INT_MIN (-2147483648)
#define QUEUE_EMPTY INT_MIN

typedef struct node
{
    int value;
    struct node *next;
} node;

typedef struct queue
{
    //initialize in main
    node *head;
    node *tail;
} queue;

void init_queue(queue **q)
{
    (*q) = (queue*)malloc(sizeof(queue)); 
    (*q)->head = NULL;
	(*q)->tail = NULL;
}

bool enqueue(queue **q, int value)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->value = value;
    newnode->next = NULL;

    //the first element add into the queue
    if((*q)->head == NULL && (*q)->tail == NULL)
	{
        (*q)->head = newnode;
        (*q)->tail = newnode;
    }
    else
	{
        (*q)->tail->next = newnode;
        (*q)->tail = newnode;
    }
    return true;
}

int dequeue(queue **q)
{

    //check if the queue is empty
    if((*q)->head==NULL)
        return QUEUE_EMPTY;

    int result = (*q)->head->value;
    node *temp = (*q)->head;
    (*q)->head = (*q)->head->next;
    if((*q)->head==NULL)
	{
        (*q)->tail = NULL;
    }
    free(temp);
    return result;
}

int main()
{
    queue *q1, *q2, *q3;
    init_queue(&q1);
    init_queue(&q2);
    init_queue(&q3);

    enqueue(&q1, 15);
    enqueue(&q1, 16);
    enqueue(&q1, 29);
    
    enqueue(&q2, 46);
    enqueue(&q2, 23);
    enqueue(&q2, 49);

    enqueue(&q3, 23);
    enqueue(&q3, 21);
    enqueue(&q3, 27);

    int t;
    while((t=dequeue(&q2))!=QUEUE_EMPTY)
	{
        printf("t = %d\n", t); // Printf 46, 23, 49
    }
    return 0;
}
