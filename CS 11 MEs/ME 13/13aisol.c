#include <stdio.h>
#include <stdlib.h>

// Define the node structure for the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Declare the head of the linked list as a global variable
struct Node *head = NULL;

// Function prototypes
void insertAtHead(int data);
void insertAfterIndex(int data, int index);
void deleteAtIndex(int index);
void deleteElement(int data);
void printList();

int main()
{
    int n, i;
    scanf("%d", &n);

    // Read in the initial list of integers
    int initial_list_size;
    scanf("%d", &initial_list_size);
    for (i = 0; i < initial_list_size; i++)
    {
        int data;
        scanf("%d", &data);
        insertAtHead(data);
    }

    // Read in the operations
    for (i = 0; i < n; i++)
    {
        int operation, x, y;
        scanf("%d%d", &operation, &x);

        switch (operation)
        {
            case 1:
                insertAtHead(x);
                break;
            case 2:
                scanf("%d", &y);
                insertAfterIndex(x, y);
                break;
            case 3:
                deleteAtIndex(x);
                break;
            case 4:
                deleteElement(x);
                break;
            case 5:
                printList();
                break;
        }
    }

    return 0;
}

// Function to insert a new node at the head of the list
void insertAtHead(int data)
{
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

// Function to insert a new node after a specific index in the list
void insertAfterIndex(int data, int index)
{
    // Check if the index is greater than the size of the list
    if (index < 0)
    {
        return;
    }

    int i;
    struct Node *current = head;
    for (i = 0; i < index && current != NULL; i++)
    {
        current = current->next;
    }

    // If the current node is NULL, then the index is out of range
    if (current == NULL)
    {
        return;
    }

    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = current->next;
    current->next = new_node;
}

// Function to delete the node at a specific index in the list

