//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX 100 //����ĵ����ַ�����󳤶�
//
///**
// * �����еĽ����������
// * */
//typedef struct Node
//{
//    int data;
//    struct Node* next;
//} Node, * NodePoint;
//
///**
// * ͷ�����������
// */
//typedef struct HeadNode
//{
//    int n;//�����н�����
//    NodePoint first; //ָ������ĵ�һ�����ָ��
//} HeadNode;
//
///*
// * ö�����ͱ�ʾ����״̬
// * OK:��ʾ�����ɹ�
// * ERROR:��ʾ����ʧ��
// */
//typedef enum
//{
//    OK,
//    ERROR
//} OprStatus;
//
///*
// * �ж�malloc�Ƿ�����ռ�ɹ�,���ʧ�����˳���������;
// */
//void mallocJudge(void* point)
//{
//    if (point == NULL)exit(0);
//}
//
///*
// * �ж����ַ���str���Ƿ�����Ӵ�subStr,��������:true,���򷵻�:false
// */
//bool contains(char* str, char* subStr)
//{
//    return strstr(str, subStr) != NULL;
//}
//
////����Ĵ���
//HeadNode* create()
//{
//    HeadNode* head = NULL;
//    head = (HeadNode*)malloc(sizeof(HeadNode));
//    mallocJudge(head);
//    int time;
//    scanf("%d", &time);
//    head->n = time;
//    head->first = NULL;
//
//    int temp;
//    Node* p = NULL;
//    for(int i=0;i<time;i++)
//    {
//        p = (Node*)malloc(sizeof(Node));
//        mallocJudge(p);
//        scanf("%d", &temp);
//        p->data = temp;
//        p->next = head->first;
//        head->first = p;
//    }
//    return head;
//}
//
////��������
//OprStatus show(HeadNode* head)
//{
//    if (head->n == 0)return ERROR;
//    Node* p = head->first;
//    for (int i = 0; i < head->n; i++)
//    {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    return OK;
//}
//
////�����ɾ��
//OprStatus del(HeadNode* head, int i)
//{
//    if (i > head->n)return ERROR;
//    Node* p = head->first;
//    if (i == 1)
//    {
//        head->first = p->next;
//        free(p);
//        head->n--;
//        return OK;
//    }
//    Node* pre = NULL;
//    for (int j = 1; j < i ; j++)
//    {
//        pre = p;
//        p = p->next;
//    }
//    pre->next = p->next;
//    free(p);
//    head->n--;
//    return OK;
//}
//
////����Ĳ���
//OprStatus insert(HeadNode* head, int i, int data)
//{
//    if (i<1 || i>head->n + 1)return ERROR;
//    Node* p = head->first;
//    Node* newnode = NULL;
//    newnode = (Node*)malloc(sizeof(Node));
//    mallocJudge(newnode);
//    newnode->data = data;
//    newnode->next = NULL;
//    //�����һ�����
//    if (i == 1)
//    {
//        head->first = newnode;
//        newnode->next = p;
//        head->n++;
//        return OK;
//    }
//    //��pѭ��������λ�õ�ǰһ�����
//    for (int j = 1; j < i - 1; j++)
//    {
//        p = p->next;
//    }
//    //���������
//    if (i == head->n + 1)
//    {
//        p->next = newnode;
//    }
//    //�����м���
//    else
//    {
//        newnode->next = p->next;
//        p->next = newnode;
//    }
//    head->n++;
//    return OK;
//}
//
////�ַ����ķ���
//char** split(char* str, char* splitor)
//{
//    int len = strlen(str);
//    char** strs=(char**)malloc((len+1)*sizeof(char*));
//    int j = 0;
//    char* a = strtok(str, splitor);
//    strs[j] = a;
//    while (a != NULL)
//    {
//        a = strtok(NULL, splitor);
//        strs[++j] = a;
//    }
//    return strs;
//}
//
////��ȡ��i�Ž��
//Node* get(HeadNode* head, int i)
//{
//    if (i<1 || i>head->n)return NULL;
//    Node* p = head->first;
//    for (int j = 1; j < i; j++)
//    {
//        p = p->next;
//    }
//    return p;
//}
//
//int main()
//{
//    int oprNumber;//����ͳ�ƴ���
//    char inputs[MAX];//��������ĵ��в����ַ���
//    char** strs = NULL;
//    int index;//λ�ã���1��ʼ����
//    int data;//����Ԫ��
//    char order1[50]="show";
//    char order2[50] = "delete";
//    char order3[50] = "insert";
//    char flag[10] = " ";
//
//    HeadNode* head = create(); //��������
//    scanf_s("%d", &oprNumber); //��ȡ��������
//    getchar();//��ȡ����ͳ�ƴ�������Ŀմ�,�ú������ַ����ܱ��ɹ���ȡ
//    for (int i = 0; i < oprNumber; ++i)
//    {
//        gets_s(inputs);
//        if (contains(inputs, order1))//����չʾ
//        {
//            if (show(head) == ERROR)
//            {
//                puts("Link list is empty");
//            }
//        }
//        else if (contains(inputs, order2))//ɾ������
//        {
//            strs = split(inputs, flag);
//            index = atoi(strs[1]);//���ַ���ת�������
//            if (del(head, index) == OK)
//            {
//                puts("delete OK");
//            }
//            else
//            {
//                puts("delete fail");
//            }
//        }
//        else if (contains(inputs, order3))//��������
//        {
//            strs = split(inputs, flag);
//            index = atoi(strs[1]);
//            data = atoi(strs[2]);
//            if (insert(head, index, data) == OK)
//            {
//                puts("insert OK");
//            }
//            else
//            {
//                puts("insert fail");
//            }
//        }
//        else //��ȡ��i������
//        {
//            strs = split(inputs,flag);
//            index = atoi(strs[1]);
//            Node* p = get(head, index);
//            if (p == NULL)
//            {
//                puts("get fail");
//            }
//            else
//            {
//                printf("%d", p->data);
//            }
//        }
//    }
//    return 0;
//}