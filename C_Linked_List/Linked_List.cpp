#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


typedef struct node
{
	int data;
	struct node *next;
}Node;

// Node *head = NULL;

void Push_Front(Node** , int);
void Push_Back(Node **start, int value);
void insert_node(Node **start, int insert_after_value, int value);
void delete_node(Node **start, int value);
void print_list(Node *node);
void free_list(Node *node);

void ppp(Node *head , Node *back)
{
	head->data = 3000;
	back->data = 5000;
	head = back;
}

int main(int argc, char* argv[])
{
		// create first node "head"
	// Node *head = NULL;
	// Push_Front(&head, 5);
	// Push_Front(&head, 128);
	// Push_Front(&head, 41);
    // Push_Back(&head, 30);
    // delete_node(&head, 5);

		// Test
	Node *back = (Node*)malloc(sizeof(Node));
	Node *head = (Node*)malloc(sizeof(Node));
	back->data=100;
	// ppp(head,back); // output: 3000 , Choose one
	head=back;	// output: 100  , Choose one
	printf("%d", head->data);

		// insert non-exist node, linked list would not have changed
	// insert_node(&head, 77, 92);
	// // insert after node of data 128
	// insert_node(&head, 128, 84); 
	// // insert after the last node
	// insert_node(&head, 41, 97);

	// // delete the first node
	// delete_node(&head, 5);
	// // delete the node of data 41
	// delete_node(&head, 41);
	// // delete the last node
	// delete_node(&head, 97);

	// print_list(head);
	// free_list(head);

	return 0;	
}

void Push_Front(Node **start, int value)
{
	Node *new_node = (Node*)malloc(sizeof(Node)); // equal to =>  Node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = value;
	new_node->next = *start;
    *start = new_node;
}

void Push_Back(Node **start, int value)
{
    Node *newNode = (struct node*)calloc(1, sizeof(struct node));
    newNode->data = value;
    Node *Current = *start;

    while(Current->next)
    {
        Current = Current->next;
    }

    Current->next = newNode;
}

void insert_node(Node **start, int insert_after_value, int value)
{
	Node *current = *start; 
	Node *new_node = (Node*)malloc(sizeof(Node));	
	new_node->data = value;
	new_node->next = NULL;
	
	while(current != NULL) {
		if(insert_after_value == current->data) {
			if(current->next == NULL) {
				current->next = new_node;
				break;
			}
			else {
				new_node->next = current->next;
				current->next = new_node;
				break;
			}
		}
		current = current->next;
	}
}

void delete_node(Node **start, int value)
{
	Node *current = *start, 
		 *previous;

	/* First find the value */
	if (current->data == value)
	{
		*start = current->next;
		free(current);
		return;
	}

    while(current)
    {
        if (current->data == value)
        {
			previous->next = current->next; 
            free(current);
            return;
        }
		previous = current;
		current = current->next;
    }
}

void print_list(Node *node)
{
	while(node != NULL) {
		printf("%d ", node->data); 
		node = node->next;
	}
	printf("\n");
}

void free_list(Node *node)
{
	Node *current, *temp;
	current = node;
	while(current != NULL) {
		temp = current;
		current = current->next;
		free(temp);
	}
}