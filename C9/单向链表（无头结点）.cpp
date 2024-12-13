//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//
//typedef struct Node
//{
//    int data;
//    struct Node* next;
//} node;
//
//node* create()
//{
//    node* head=NULL;
//    node* p = NULL;
//    node* t = NULL;
//    head = (node*)malloc(sizeof(node));
//    if (head == NULL)exit;
//    head->data = 0;
//    head->next = NULL;
//    int temp,flag=1;
//    while (1)
//    {
//        scanf("%d", &temp);
//        if (temp == -1)break;
//        p = (node*)malloc(sizeof(node));
//        p->data = temp;
//        p->next = NULL;
//        if (flag==1)
//        {
//            head = p;
//            flag++;
//        }
//        else t->next = p;
//        t = p;
//    }
//    return head;
//}
//
//node* del(node* head)
//{
//    node* p = NULL, *pre = NULL;
//    p = head;
//    while (p != NULL)
//    {
//        if (head->data % 2 != 0)
//        {
//            head = p->next;
//            free(p);
//            p = head;
//            continue;
//        }
//        if (p->data % 2 == 0)
//        {
//            pre = p;
//            p = p->next;
//            continue;
//        }
//        pre->next = p->next;
//        free(p);
//        p = pre->next;
//    }
//    return head;
//}
//
//void printLinkedTable(node* head)
//{
//    if (head == NULL)
//    {
//        printf("NULL\n");
//        return;
//    }
//    node* p = NULL;
//    p = head;
//    while (p!=NULL)
//    {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//void freeAll(node* head)
//{
//    node* p = NULL, * pre = NULL;
//    p = head;
//    while (p != NULL)
//    {
//        pre = p;
//        p = p->next;
//        free(pre);
//    }
//}
//
//int main()
//{
//    node* head;
//    int n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; ++i)
//    {
//        // 创建链表
//        head = create();
//        // 删除奇数结点
//        head = del(head);
//        // 输出链表数据
//        printLinkedTable(head);
//        // 释放当前链表空间
//        freeAll(head);
//    }
//    return 0;
//}
//
