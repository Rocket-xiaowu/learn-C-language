//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//#include<string.h>
//
//// ѧ����㶨��
//typedef struct student
//{
//    char name[20];//����
//    char no[20];//ѧ��
//    float grade;//����
//    struct student* next;
//} stu;
//
//// ͷ��㶨��
//typedef struct
//{
//    int n; //ѧ������
//    float sum;//ѧ�������
//    float avg;//ƽ������
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
//    // ��������  
//    head = create();
//    // ɾ������ƽ�������ѧ����Ϣ
//    deleteLessThanAvg(head);
//    // ���������Ϣ
//    printLinkedTable(head);
//    return 0;
//}