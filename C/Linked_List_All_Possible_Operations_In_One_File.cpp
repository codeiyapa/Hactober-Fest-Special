//Author : RAHUL KUMAR ROY
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *createNode()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    return (newNode);
}
void insertNode(int data)
{
    struct node *ptr, *temp;
    temp = head;
    ptr = createNode();
    ptr->data = data;
    ptr->next = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}
void traverseNode()
{
    struct node *traverse = head;
    if (traverse == NULL)
    {
        printf("list is empty! cant proceed\n");
        return;
    }

    printf("Showing Nodes----");
    while (traverse != NULL)
    {
        printf("%d  ", traverse->data);
        traverse = traverse->next;
    }
}
void insertAtFirst(int data)
{
    struct node *ptr;
    ptr = createNode();
    ptr->data = data;
    if (head == NULL)
    {
        ptr->next = NULL;
        head = ptr;
        return;
    }
    ptr->next = head;
    head = ptr;
}
void deleteFirstNode()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("list is Empty\n");
        return;
    }
    else
    {
        head = head->next;
        free(ptr);
    }
}
void insertAfterNodeValue(int data, int data_item)
{
    struct node *ptr, *temp;
    ptr = createNode();
    temp = head;
    if (temp == NULL)
    {
        printf("list is empty\n");
    }
    if (temp->data == data_item)
    {
        ptr->data = data;
        ptr->next = temp->next;
        temp->next = ptr;
        return;
    }
    temp = temp->next;
    while (temp->next != NULL)
    {
        if (temp->data == data_item)
        {
            ptr->data = data;
            ptr->next = temp->next;
            temp->next = ptr;
            return;
        }
        temp = temp->next;
    }
    ptr->data = data;
    ptr->next = NULL;
    temp->next = ptr;
}
void deleteLastNode()
{
    struct node *ptr, *temp;
    ptr = head;
    if (ptr == NULL)
    {
        printf("list is empty\n");
        return;
    }
    temp = head->next;
    while (temp->next != NULL)
    {
        temp = temp->next;
        ptr = ptr->next;
    }
    ptr->next = NULL;
    free(temp);
}
void searchNode(int item)
{
    struct node *temp = head;
    if (temp == NULL)
    {
        printf("list is empty ! cant search\n");
        return;
    }

    while (temp != NULL)
    {
        if (temp->data == item)
        {
            printf("%d is present in the list\n", item);
            return;
        }
        temp = temp->next;
    }
    printf("%d is not present in the list\n", item);
}
// implimentation pending
void deleteAnyValidNode(int data)
{
    struct node *p, *q;
    q = head;
    if (head == NULL)
    {
        printf("list is empty\n");
        return;
    }
    if (q->data == data)
    {
        head = head->next;
        free(q);
        return;
    }
    while (q->data != data)
    {
        p = q;
        q = p->next;
    }
    p->next = q->next;
    free(q);
    return;
}

void initializeList(int size)
{
    struct node *ptr;
    int data;
    if (head != NULL)
    {
        printf("there is already some values in the list\n");
        printf("Delete elements first to initialize with a new one\n");
        return;
    }
    else
    {
        for (int i = 1; i <= size; i++)
        {
            printf("Enter node data for the %d Node\n", i);
            scanf("%d", &data);
            ptr = createNode();
            insertNode(data);
        }
    }
}

void deleteAllNodesAtOnce()
{
    struct node *ptr, *temp;
    ptr = head;
    if (head == NULL)
    {
        printf("list is already empty\n");
        return;
    }

    while (ptr->next != NULL)
    {
        temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
    free(ptr);
    head = NULL;
    printf("Nodes deleted succesfully\n");
}
int main()
{
    int choice, data, item, count = 0;
    while (1)
    {
        system("cls");
        printf("Enter 1 to insert Node\n");
        printf("Enter 2 to insert at first Node\n");
        printf("Enter 3 to delete first Node\n");
        printf("Enter 4 to delete last Node\n");
        printf("Enter 5 to insert node after a value\n");
        printf("Enter 6 to Traverse Node\n");
        printf("Enter 7 to Search Node\n");
        printf("Enter 8 to Delete any Node Value\n");
        printf("Enter 9 to initialize list with some custom values\n");
        printf("Enter 10 to delete all nodes at once\n");
        printf("Enter 0 to Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to be inserted\n");
            scanf("%d", &data);
            insertNode(data);
            break;
        case 2:
            printf("Enter data to be inserted at first\n");
            scanf("%d", &data);
            insertAtFirst(data);
            break;
        case 3:
            deleteFirstNode();
            break;
        case 4:
            deleteLastNode();
            break;
        case 5:
            printf("Enter after which node value data you want to insert\n");
            scanf("%d", &item);
            printf("Enter data to be inserted after a Node value\n");
            scanf("%d", &data);
            insertAfterNodeValue(data, item);
            break;
        case 6:
            traverseNode();
            break;
        case 7:
            printf("Enter data to be searched in the list\n");
            scanf("%d", &item);
            searchNode(item);
            break;
        case 8:
            printf("Enter data to be deleted from the list\n");
            scanf("%d", &item);
            deleteAnyValidNode(item);
            break;
        case 9:
            printf("How many natural numbers to be inserted for testing\n");
            scanf("%d", &item);
            initializeList(item);

            break;
        case 10:
            deleteAllNodesAtOnce();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Enter valid choice only\n");
            break;
        }
        getch();
    }

    return 0;
}


