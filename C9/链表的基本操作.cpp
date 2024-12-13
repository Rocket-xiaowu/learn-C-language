//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX 100 //输入的单行字符串最大长度
//
///**
// * 链表中的结点类型声明
// * */
//typedef struct Node
//{
//    int data;
//    struct Node* next;
//} Node, * NodePoint;
//
///**
// * 头结点类型声明
// */
//typedef struct HeadNode
//{
//    int n;//链表中结点个数
//    NodePoint first; //指向链表的第一个结点指针
//} HeadNode;
//
///*
// * 枚举类型表示操作状态
// * OK:表示操作成功
// * ERROR:表示操作失败
// */
//typedef enum
//{
//    OK,
//    ERROR
//} OprStatus;
//
///*
// * 判断malloc是否申请空间成功,如果失败则退出整个程序;
// */
//void mallocJudge(void* point)
//{
//    if (point == NULL)exit(0);
//}
//
///*
// * 判断在字符串str中是否包含子串subStr,包含返回:true,否则返回:false
// */
//bool contains(char* str, char* subStr)
//{
//    return strstr(str, subStr) != NULL;
//}
//
////链表的创建
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
////链表的输出
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
////链表的删除
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
////链表的插入
//OprStatus insert(HeadNode* head, int i, int data)
//{
//    if (i<1 || i>head->n + 1)return ERROR;
//    Node* p = head->first;
//    Node* newnode = NULL;
//    newnode = (Node*)malloc(sizeof(Node));
//    mallocJudge(newnode);
//    newnode->data = data;
//    newnode->next = NULL;
//    //插入第一个结点
//    if (i == 1)
//    {
//        head->first = newnode;
//        newnode->next = p;
//        head->n++;
//        return OK;
//    }
//    //将p循环到插入位置的前一个结点
//    for (int j = 1; j < i - 1; j++)
//    {
//        p = p->next;
//    }
//    //插入最后结点
//    if (i == head->n + 1)
//    {
//        p->next = newnode;
//    }
//    //插入中间结点
//    else
//    {
//        newnode->next = p->next;
//        p->next = newnode;
//    }
//    head->n++;
//    return OK;
//}
//
////字符串的分离
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
////获取第i号结点
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
//    int oprNumber;//操作统计次数
//    char inputs[MAX];//保存输入的单行操作字符串
//    char** strs = NULL;
//    int index;//位置，从1开始计数
//    int data;//数据元素
//    char order1[50]="show";
//    char order2[50] = "delete";
//    char order3[50] = "insert";
//    char flag[10] = " ";
//
//    HeadNode* head = create(); //创建链表
//    scanf_s("%d", &oprNumber); //获取操作次数
//    getchar();//获取操作统计次数后面的空串,让后续的字符串能被成功获取
//    for (int i = 0; i < oprNumber; ++i)
//    {
//        gets_s(inputs);
//        if (contains(inputs, order1))//链表展示
//        {
//            if (show(head) == ERROR)
//            {
//                puts("Link list is empty");
//            }
//        }
//        else if (contains(inputs, order2))//删除数据
//        {
//            strs = split(inputs, flag);
//            index = atoi(strs[1]);//将字符串转变成整数
//            if (del(head, index) == OK)
//            {
//                puts("delete OK");
//            }
//            else
//            {
//                puts("delete fail");
//            }
//        }
//        else if (contains(inputs, order3))//插入数据
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
//        else //获取第i号数据
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