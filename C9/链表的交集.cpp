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
//    node* head = NULL;
//    node* p = NULL;
//    node* t = NULL;
//    head = (node*)malloc(sizeof(node));
//    if (head == NULL)exit;
//    head->data = 0;
//    head->next = NULL;
//    int temp, flag = 1;
//    while (1)
//    {
//        scanf_s("%d", &temp);
//        if (temp == -1)break;
//        p = (node*)malloc(sizeof(node));
//        p->data = temp;
//        p->next = NULL;
//        if (flag == 1)
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
//bool chachong(node* s3, int a)
//{
//    node* temp = s3;
//    while (temp != NULL)
//    {
//        if (temp->data == a)return true;
//        temp = temp->next;
//    }
//    return false;
//}
//
//node *getIntersection(node* s1,node* s2)
//{
//    if (s1 == NULL || s2 == NULL) return NULL;
//    node* p = s1;
//    node* t = s2;
//    node* s3 = NULL;
//    node* p3 = NULL;
//    node* t3 = NULL;
//    int flag=1;
//    while (p != NULL&&t!=NULL)
//    {
//        p3 = (node*)malloc(sizeof(node));
//        p3->next = NULL;
//        while (t != NULL)
//        {
//            if (p->data == t->data)
//            {
//                if (s3 != NULL && chachong(s3, p->data))break;
//                p3->data = p->data;
//                if (flag == 1)
//                {
//                    s3 = p3;
//                    flag++;
//                }
//                else
//                {
//                    t3->next = p3;
//                }
//                t3 = p3;
//                break;
//            }
//            t = t->next;
//        }
//        t = s2;
//        p = p->next;
//    }
//    return s3;
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
//void printLinkedTable(node* head)
//{
//    if (head == NULL)
//    {
//        printf("NULL\n");
//        return;
//    }
//    node* p = NULL;
//    p = head;
//    while (p->next != NULL)
//    {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    printf("%d", p->data);
//}
//
//int main()
//{
//    node* s1, * s2, * s3;
//    //创建第1个链表
//    s1 = create();
//    //创建第2个链表
//    s2 = create();
//    //生成交集构成的新链表
//    s3 = getIntersection(s1, s2);
//    //释放第1个链表空间
//    freeAll(s1);
//    //释放第2个链表空间
//    freeAll(s2);
//    //输出新链表
//    printLinkedTable(s3);
//    //释放新链表空间
//    freeAll(s3);
//    return 0;
//}