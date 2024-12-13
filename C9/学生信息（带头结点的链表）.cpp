//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//#include<string.h>
//
//// 学生结点定义
//typedef struct student
//{
//    char name[20];//姓名
//    char no[20];//学号
//    float grade;//绩点
//    struct student* next;
//} stu;
//
//// 头结点定义
//typedef struct
//{
//    int n; //学生个数
//    float sum;//学生绩点和
//    float avg;//平均绩点
//    stu* first;
//} HeadNode;
//
//HeadNode* create()
//{
//    HeadNode* head;
//    head = (HeadNode*)malloc(sizeof(HeadNode));
//    head->n = head->avg = head->sum = 0;
//    head->first = NULL;
//    char temp_name[20];
//    stu* p = NULL;
//    stu* t = NULL;
//    while (1)
//    {
//        scanf("%s", temp_name);
//        if (strcmp(temp_name, "*") == 0)break;
//        p = (stu*)malloc(sizeof(stu));
//        strcpy(p->name, temp_name);
//        scanf("%s%f", p->no, &p->grade);
//        p->next = NULL;
//        if (head->n == 0)
//        {
//            head->first = p;
//        }
//        else
//        {
//            t->next = p;
//        }
//        t = p;
//        head->n++;
//        head->sum += p->grade;
//        head->avg = head->sum / head->n;
//    }
//
//    return head;
//}
//
//void deleteLessThanAvg(HeadNode* head)
//{
//    if (head->first == NULL)
//    {
//        printf("This is a null linked table,can't delete any node!\n");
//        return;
//    }
//    stu* p=NULL,*pre=NULL;
//    p = head->first;
//    while (p != NULL)
//    {
//        if (head->first->grade < head->avg) 
//        {
//            head->first = p->next;
//            free(p);
//            p = head->first;
//            continue;
//        }
//        if (p->grade >= head->avg)
//        {
//            pre = p;
//            p = p->next;
//            continue;
//        }
//        pre->next = p->next;
//        free(p);
//        p = pre->next;
//    }
//}
//
//void printLinkedTable(HeadNode* head)
//{
//    if (head->first == NULL)
//    {
//        printf("This is a null linked table!\n");
//        return;
//    }
//    stu* p;
//    p = head->first;
//    while (p != NULL)
//    {
//        printf("%s\n", p->name);
//        p = p->next;
//    }
//}
//
//int main()
//{
//    HeadNode* head;
//    // 创建链表  
//    head = create();
//    // 删除低于平均绩点的学生信息
//    deleteLessThanAvg(head);
//    // 输出链表信息
//    printLinkedTable(head);
//    return 0;
//}