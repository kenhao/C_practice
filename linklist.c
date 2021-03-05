#include <stdio.h>
#include <stdlib.h>

typedef struct node //define node data type
{
    int data;
    struct node *next;
} NODE;

void print_list(NODE *);
NODE *create_list(NODE *ptr, int cnt, int a[])
//use for loop creat link list,a[] is data that will create linked list value
{
    NODE *head, *tail;

    for (int i = 0; i < cnt; i++)
    {
        head = (NODE *)malloc(sizeof(NODE));
        head->data = a[i];
        //head 去指向目前linked list第一個node
        if (i == 0)
        {
            ptr = head;
        }

        head->next = NULL;
        if (i > 0)
            tail->next = head;
        tail = head;
        //用tail去指向目前linked list的最後一個node
    }
    return ptr;
}

NODE *insert_list(NODE *ptr, int num)
{
    NODE *temp, *prenode, *node;
    //*node is the preceding node, prenode is to find which node is max of less than num
    prenode = (NODE *)malloc(sizeof(NODE));
    prenode = ptr;
    while (prenode)
    {
        if (prenode == NULL)
        {
            break;
        }
        if (num >= prenode->data)
        {
            node = prenode;
            prenode = prenode->next;
        }
        else
        {

            break;
        }
    }
    if (prenode == ptr) //if no node is bigger than node that insert(insert in first node)
    {
        node = prenode;
    }

    temp = (NODE *)malloc(sizeof(NODE));
    temp->data = num;
    if (ptr) //insert after *node
    //non-empty list
    {
        if (node == ptr)
        {
            temp->next = node;
            ptr = temp;
        }
        else
        {
            temp->next = node->next;
            node->next = temp;
        }
    }
    else //empty list
    {
        temp->next = NULL;
        ptr = temp;
    }
    return ptr;
}

void delete_list(NODE *ptr, int num)
{
    NODE *d, *dnode; //dnode is the deleted node
    d = (NODE *)malloc(sizeof(NODE));
    d = ptr;
    while (d) //find which node's data == num
    {
        if (d->data == num)
        {
            dnode = d;
            break;
        }
        else
        {
            d = d->next;
        }
    }
    NODE *prenode;
    prenode = (NODE *)malloc(sizeof(NODE));
    prenode = ptr;
    while (prenode) //find preceding node and deleting dnode
    {
        if (prenode->next == dnode)
            break;
        else
        {
            prenode = prenode->next;
        }
    }
    if (prenode)
        prenode->next = dnode->next;
    else
        ptr = ptr->next;
}

void print_list(NODE *ptr) //這個函式是我做來檢查是否有錯誤,功能為印出linked list
{
    printf("The list contains:");
    while (ptr)
    {
        printf("%p ", ptr);
        printf("%d ", ptr->data);
        printf("%p", ptr->next);
        printf("\n");
        ptr = ptr->next;
    }
}

int main()
{
    int a[10];
    unsigned int input;
    FILE *fp;
    fp = fopen("/Users/hao/Desktop/c program/C_code/S0761016/input.txt", "r");
    for (int i = 0; i < 8; i++)
        fscanf(fp, "%d", &a[i]);
    fclose(fp);

    for (int i = 0; i < 8; i++) //sort and store in a array
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    NODE *ptr;
    ptr = create_list(ptr, 8, a);
    printf("請輸入ㄧ非零正整數：");
    scanf("%d", &input);
    while (input != 0) //nter numbers continuously
    {
        NODE *temp;
        temp = (NODE *)malloc(sizeof(NODE));
        temp = ptr;
        while (temp)
        {
            if (input == temp->data) //delete if number is repeated
            {
                delete_list(ptr, input);
                break;
            }
            else if (temp->next == NULL) //insert if temp is directe to NULL
            {
                ptr = insert_list(ptr, input);
                break;
            }
            else // temp direct to next node
                temp = temp->next;
        }
        printf("請輸入ㄧ非零正整數：");
        scanf("%d", &input);
    }
    fp = fopen("/Users/hao/Desktop/c program/C_code/S0761016/output.txt", "w");
    if (ptr)
    {
        while (ptr) //write data and link in output.txt
        {
            fprintf(fp, "Node Address:%p ", ptr);
            fprintf(fp, "Data:%d,Next:%p", ptr->data, ptr->next);
            fprintf(fp, "\n");
            ptr = ptr->next;
        }
    }
    else
        printf("There is not any node in LINKED LIST");

    free(ptr);
    fclose(fp);
}