#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct sinhvien
{
    char ten[100];
    double gpa;
} sv;

typedef struct node
{
    sv data; // data là sinh viên
    struct node *next;
} node;

node *makenode(sv s)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = s;
    newnode->next = NULL;
    return newnode;
}

void pushback(node **head, sv s) // thêm node vào cuối dslk
{
    node *newnode = makenode(s);
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void duyet(node *head)
{
    while (head != NULL)
    {
        printf("%s ", head->data.ten);
        printf("%.2lf ", head->data.gpa);
        head = head->next;
        printf("\n");
    }
}

// HÀM SẮP XẾP ĐÃ ĐƯỢC CHUẨN HÓA CÚ PHÁP
void sapxep(node *head)
{
    // Đã sửa: node *i = head
    for (node *i = head; i != NULL; i = i->next)
    {
        node *minnode = i;
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (minnode->data.gpa < j->data.gpa)
            {
                minnode = j;
            }
        }
        // Tráo đổi dữ liệu (Swap data)
        sv tmp = minnode->data;
        minnode->data = i->data;
        i->data = tmp;
    }
}

int main()
{
    node *head = NULL;
    sv s = {"Teo", 3.5};
    sv t = {"Heo", 3.8};
    sv l = {"Long", 2.5};
    sv v = {"Hai", 3.7};
    pushback(&head, s);
    pushback(&head, t);
    pushback(&head, v);
    pushback(&head, l);
    duyet(head);
    printf("\n");
    sapxep(head);
    duyet(head);
    return 0;
}