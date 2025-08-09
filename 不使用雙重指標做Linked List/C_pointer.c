#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void AddNode (Node *node, int value)
{
    Node *NewNode = (Node*)malloc(sizeof(Node));
    NewNode->data = value;
    NewNode->next = NULL;

    if (node == NULL)
    {
        node = NewNode;
    }
    else
    {
        while (node->next)
        {
            node = node->next;
        }

        node->next = NewNode;
        node->next->data = value;
    }
}

void PrintNode (Node *node)
{
    // While (node)
    // {
    //     printf("%d", node->data);
    //     node = node->next;
    // }
    while (node)
    {
        printf("%d\n", node->data);
        node = node->next;
    }
}

int main() 
{
    Node n1 = {100, NULL};
    AddNode(&n1, 200);
    AddNode(&n1, 600);
    AddNode(&n1, 65588);
    PrintNode(&n1); // print 100, 200, 600, 65588
    
    return 0;
}

