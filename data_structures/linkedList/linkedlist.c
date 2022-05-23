#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct LinkedList
{
    struct Node *Head;
};
void printList(struct Node *n)
{
	while(n!=NULL)
	{
		printf("data = %d\n",n->data);
		n = n->next;
	}
}
/*traversal*/
void traverse_list(struct Node *start)
{
	int i = 1;
	struct Node *current;
	current = start;
	while(current!=NULL)
	{
		printf("\nNode %d data = %d",i,current->data);
		i++;
		current = current->next;
	}
}
/*Insertion*/
void insert_node(struct node *n)
{
    
}

struct Node *list_search(struct Node *head,int k)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp = head;
    while(temp!=NULL && temp->data != k)
    {
        temp = temp->next;
    }
    return temp;
}
int main()
{
    /*Initialize Node*/
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    /*Allocate memory*/
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    /*Assign data values*/
    head->data = 1;
    second->data = 2;
    third->data = 3;

    /*Connect Nodes*/
    head->next = second;
    second->next = third;

    /*Form the list*/
    struct LinkedList *List;
    List->Head = head;
	
	printList(head);
	
}

