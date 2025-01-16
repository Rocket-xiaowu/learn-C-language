//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
//
//#define MAXRECORDCOUNT 1000 /*��������¼��*/
//
//typedef struct book {
//	int no;					/*ͼ����*/
//	char name[51];			/*����*/
//	char ISBN[14];			/*ISBN��*/
//	char publisher[51];		/*��������*/
//	char time[21];			/*����ʱ��*/
//	float price;			/*����*/
//}Book;
//
//Book BookInfo[MAXRECORDCOUNT];
//int iCurrentRecord = 0; /*��ǰ��¼�ı��*/
//char strTmp[51];
//
//void initData(void);					/*��ʼ������*/
//void PrintMenu(void);					/*����˵�ѡ����Ϣ*/
//void inputBookInfo(void);				/*¼��ͼ����Ϣ*/
//void searchBookInfo(void);				/*��ѯͼ����Ϣ*/
//void modifyBookInfo(void);				/*�޸�ͼ����Ϣ*/
//void deleteBookInfo(void);				/*ɾ��ͼ����Ϣ*/
//void saveDataToFile(void);				/*�������ݵ��ļ�*/
//void loadDataFromFile(void);			/*���ļ���������*/
//void exitSystem(void);					/*�˳�ϵͳ*/
//void sortInfo(void);					/*����ͼ����Ϣ��������*/
//char* getChars(unsigned int count);		/*��ȡ�ַ�������֤����Ч��*/
//
//int main()
//{
//	int iSelected = 0;
//	system("color 0A");	/*������Ļ�ı���ɫΪ0(��ɫ)��ǰ��ɫΪA(����ɫ)*/
//	do {
//		PrintMenu();	/*����˵�ѡ����Ϣ*/
//		scanf("%d", &iSelected);	/*����ѡ��*/
//		getchar();	/*��������ѡ��ֵSelectedsʱ��������Ǹ��س�*/
//		system("cls");	/*�����Ļ�ϵ���Ϣ*/
//
//		/*����ѡ��ִ����Ӧ�Ķ���*/
//		switch (iSelected)
//		{
//		case 0:
//			printf("��ǰ��������ʼ������\n\n");
//			initData();
//			break;	/*��ʼ������*/
//		case 1:
//			printf("��ǰ������¼��ͼ����Ϣ\n\n");
//			inputBookInfo();
//			break;	/*¼��ͼ����Ϣ*/
//		case 2:
//			printf("��ǰ��������ѯͼ����Ϣ\n\n");
//			searchBookInfo();
//			break;	/*��ѯͼ����Ϣ*/
//		case 3:
//			printf("��ǰ�������޸�ͼ����Ϣ\n\n");
//			modifyBookInfo();
//			break;	/*�޸�ͼ����Ϣ*/
//		case 4:
//			printf("��ǰ������ɾ��ͼ����Ϣ\n\n");
//			deleteBookInfo();
//			break;	/*ɾ��ͼ����Ϣ*/
//		case 5:
//			printf("��ǰ������ͼ����Ϣ����\n\n");
//			sortInfo();
//			break;	/*����ͼ����Ϣ*/
//		case 6:
//			printf("��ǰ�������������ݵ��ļ�\n\n");
//			saveDataToFile();
//			break;	/*�������ݵ��ļ�*/
//		case 7:
//			printf("��ǰ���������ļ���������\n\n");
//			loadDataFromFile();
//			break;	/*���ļ���������*/
//		case 8:
//			printf("��ǰ�������˳�ϵͳ\n\n");
//			exitSystem();
//			break;	/*�˳�ϵͳ*/
//		default:
//			printf("��������ı�Ų���ȷ������������\n\n");
//			break;
//		}
//
//		printf("\n");
//		system("pause");	/*��ʾ�������������...����Ϣ*/
//		system("cls");	/*�����Ļ�ϵ���Ϣ*/
//	} while (1);
//	return 0;
//}
//
///*����˵�ѡ����Ϣ*/
//void PrintMenu(void)
//{
//	int i = 0;
//	/*���ͷ���ķָ���*/
//	printf("�X");
//	for (i = 0; i < 56; i++)
//	{
//		printf("=");
//	}
//
//	printf("�[\n");/*�������*/
//
//	/*����м䲿�ֵ�����*/
//	printf("�U ���鴢����ʾ����ѡ����Ҫִ�еĲ�����������Ӧ�ı�ţ�   �U\n");
//	printf("�U 0.%-52s �U\n", "��ʼ������");
//	printf("�U 1.%-52s �U\n", "¼��ͼ����Ϣ");
//	printf("�U 2.%-52s �U\n", "��ѯͼ����Ϣ");
//	printf("�U 3.%-52s �U\n", "�޸�ͼ����Ϣ");
//	printf("�U 4.%-52s �U\n", "ɾ��ͼ����Ϣ");
//	printf("�U 5.%-52s �U\n", "ͼ����Ϣ����");
//	printf("�U 6.%-52s �U\n", "�������ݵ��ļ�");
//	printf("�U 7.%-52s �U\n", "���ļ���������");
//	printf("�U 8.%-52s �U\n", "�˳�ϵͳ");
//
//	/*����ײ��ķָ���*/
//	printf("�^");/*�������*/
//	for (i = 0; i < 56; i++)
//	{
//		printf("=");
//	}
//	printf("�a\n");/*�������*/
//}
//
///*��ʼ������*/
//void initData(void)
//{
//	int i = 0;
//	char cInit;
//	/*ѯ���û��Ƿ��ʼ������*/
//	printf("�Ƿ��ʼ�����ݣ�Y/N����");
//	scanf("%c", &cInit);
//	getchar();
//	if (toupper(cInit) == 'N')
//	{
//		return;
//	}
//	else
//	{
//		for (i = 0; i < MAXRECORDCOUNT; i++)
//		{
//			/*�����ݿռ��ÿ�*/
//			BookInfo[i].no = 0;
//			memset(BookInfo[i].name, 0, 51);
//			memset(BookInfo[i].ISBN, 0, 14);
//			memset(BookInfo[i].publisher, 0, 51);
//			memset(BookInfo[i].time, 0, 20);
//			BookInfo[i].price = 0.0;
//		}
//		iCurrentRecord = 0;/*��ǰ��¼����Ϊ0*/
//
//		printf("���ݳ�ʼ���ɹ���\n");
//	}
//}
//
///*��ȡ�ַ�������������Ч��*/
//char* getChars(unsigned int count)
//{
//	do {
//		fgets(strTmp, 50, stdin);/*��ȡ����*/
//	} while (strlen(strTmp) > count + 1);
//	strTmp[strlen(strTmp)] = '\0';
//	return strTmp;
//}
//
///*¼��ͼ����Ϣ*/
//void inputBookInfo(void)
//{
//	char strName[51];			 /*����*/
//	char strISBN[14];			 /*ISBN��*/
//	char strPublisher[51];		 /*������*/
//	char strTime[21];			 /*��������*/
//	float price;				 /*����*/
//	char cExit;
//
//	do {
//		/*¼��������ISBN�š������硢����*/
//		printf("������������������50λ����ʾ����C������ƣ���");
//		strcpy(strName, getChars(50));
//		printf("������ISBN�ţ�������13λ����ʾ����9787302226727");
//		strcpy(strISBN, getChars(13));
//		printf("����������磨������50λ����ʾ�������ݴ�ѧ�����磩��");
//		strcpy(strPublisher, getChars(50));
//		printf("������������ڣ�������20λ����ʾ����2024-12-9����");
//		strcpy(strTime, getChars(20));
//		printf("�����붨�ۣ�ʾ����33.00����");
//		scanf("%f", &price);
//
//		/*������Ϣ*/
//		BookInfo[iCurrentRecord].no = iCurrentRecord + 1;
//		strcpy(BookInfo[iCurrentRecord].name, strName);
//		strcpy(BookInfo[iCurrentRecord].ISBN, strISBN);
//		strcpy(BookInfo[iCurrentRecord].publisher, strPublisher);
//		strcpy(BookInfo[iCurrentRecord].time, strTime);
//		BookInfo[iCurrentRecord].price = price;
//
//		iCurrentRecord++;/*��ǰ��¼�������*/
//		/*����¼�붨��ʱ��������Ļس����������޷����������Ƿ����¼�롱�ж�*/
//		getchar();
//		/*ѯ���û��Ƿ����¼��*/
//		printf("�Ƿ����¼�루Y/N����");
//		scanf("%c", &cExit);
//		getchar();/*���ռ�������Ļس����������´���Ϣ¼����Ӱ��*/
//	} while (toupper(cExit) == 'N');
//}
//
///*��ѯͼ����Ϣ*/
//void searchBookInfo(void)
//{
//	int i = 0;
//	char strName[51];
//	printf("�鿴ȫ��ͼ����Ϣ��Y/N����");
//	if (toupper(getchar()) == 'Y')
//	{
//		if (iCurrentRecord == 0)
//		{
//			printf("ϵͳ����ʱû���κ�ͼ�����ݣ�\n");
//		}
//		else
//		{
//			/*�鿴ȫ����Ϣ*/
//			printf("���\t����\tISBN��\t������\t��������\t����\n");
//			for (i = 0; i < iCurrentRecord; i++)
//			{
//				printf("%d\t%s\t%s\t%s\t%s\t%f\n",
//					BookInfo[i].no, BookInfo[i].name,
//					BookInfo[i].ISBN, BookInfo[i].publisher,
//					BookInfo[i].time, BookInfo[i].price);
//			}
//		}
//	}
//	else
//	{
//		getchar();/*�����ϴ�¼��Ļس���*/
//
//		/*��ѯָ��������ͼ����Ϣ*/
//		printf("��ָ����Ҫ��ѯ��������");
//		strcpy(strName, getChars(50));
//		for (i = 0; i < iCurrentRecord; i++)
//		{
//			/*��ǰ������ͼ��������ָ������һ�£������������Ϣ*/
//			if (strcmp(BookInfo[i].name, strName) == 0)
//			{
//				printf("%d\t%s\t%s\t%s\t%s\t%f\n",
//					BookInfo[i].no, BookInfo[i].name,
//					BookInfo[i].ISBN, BookInfo[i].publisher,
//					BookInfo[i].time, BookInfo[i].price);
//				break;
//			}
//		}
//		if (i == iCurrentRecord)
//		{
//			printf("����������Ϊ��%s����ͼ����Ϣ\n", strName);
//		}
//	}
//}
//
///*�޸�ͼ����Ϣ*/
//void modifyBookInfo(void)
//{
//	int i = 0;
//	int iModifyField = 0;
//	char strName[51];	/*���޸���Ϣ��ͼ���������Ϣ*/
//	/*ָ�����޸�ͼ���������Ϣ*/
//	printf("��ָ�����޸���Ϣ��ͼ���������");
//	strcpy(strName, getChars(50));
//
//	/*�ҵ����޸���Ϣ��ͼ�鲢�����޸�*/
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		/*��ǰ������ͼ��������ָ��������һ�£��������������Ϣ*/
//		if (strcmp(BookInfo[i].name, strName) == 0)
//		{
//			/*ָ��Ҫ�޸ĵ���Ϣ��������ISBN�š������硢�������ڡ�����*/
//			do {
//				printf("ָ��Ҫ�޸ĵ���Ϣ��0������ 1��ISBN�� 2�������� 3���������� 4������\n");
//				scanf("%d", &iModifyField);
//				if (iModifyField < 0 || iModifyField>6)
//				{
//					printf("��������ֲ���ȷ�����������룡\n");
//					continue;
//				}
//				else
//				{
//					getchar();/*�����ϴ���������Ļس���*/
//					switch (iModifyField)
//					{
//					case 0:
//						printf("ԭ����Ϊ%s���������µ�������",BookInfo[i].name);
//						strcpy(BookInfo[i].name, getChars(50));
//						getchar();
//						break;
//					case 1:
//						printf("ԭISBN��Ϊ%s���������µ�ISBN�ţ�", BookInfo[i].ISBN);
//						strcpy(BookInfo[i].ISBN, getChars(13));
//						getchar();
//						break;
//					case 2:
//						printf("ԭ������Ϊ%s���������µĳ����磺", BookInfo[i].publisher);
//						strcpy(BookInfo[i].publisher, getChars(50));
//						getchar();
//						break;
//					case 3:
//						printf("ԭ��������Ϊ%s���������µĳ������ڣ�", BookInfo[i].time);
//						strcpy(BookInfo[i].time, getChars(20));
//						getchar();
//						break;
//					case 4:
//						printf("ԭ��Ϊ%.2f���������µĶ��ۣ�");
//						scanf("%f", &(BookInfo[i].price));
//						break;
//					}
//
//					printf("�Ƿ�����޸ĸ�ͼ�����Ϣ����Y/N����");
//					if (toupper(getchar()) == 'N')break;
//				}
//			} while (1);
//			/*�޸�֮�����ͼ���������Ϣ*/
//			printf("%d\t%s\t%s\t%s\t%s\t%f\n",
//				BookInfo[i].no, BookInfo[i].name,
//				BookInfo[i].ISBN, BookInfo[i].publisher,
//				BookInfo[i].time, BookInfo[i].price);
//			break;
//		}
//	}
//	if (i == iCurrentRecord)
//	{
//		printf("����������Ϊ��%s����ͼ����Ϣ\n", strName);
//	}
//}
//
///*ɾ��ͼ����Ϣ*/
//void deleteBookInfo(void)
//{
//	int i = 0;
//	char strName[51];	/*��ɾ��ͼ���������Ϣ*/
//	/*ָ����ɾ��ͼ���������Ϣ*/
//	printf("��ָ����ɾ��ͼ���������");
//	strcpy(strName, getChars(50));
//
//	/*�ҵ���ɾ��ͼ�鲢ɾ��֮*/
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		/*��ǰ������ͼ��������ָ������һ�£���ɾ������Ϣ*/
//		if (strcmp(BookInfo[i].name, strName) == 0)
//		{
//			/*�����ݿռ��ÿ�*/
//			BookInfo[i].no = 0;
//			memset(BookInfo[i].name, 0, 51);
//			memset(BookInfo[i].ISBN, 0, 14);
//			memset(BookInfo[i].publisher, 0, 51);
//			memset(BookInfo[i].time, 0, 20);
//			BookInfo[i].price = 0.0;
//			break;
//		}
//	}
//	if (i == iCurrentRecord) printf("����������Ϊ��%s����ͼ����Ϣ\n", strName);
//	else
//	{
//		/*��ɾ����ͼ�鲻�����һ���飬�򽫺����ͼ����Ϣ������ǰ��һλ*/
//		if (i < iCurrentRecord - 1)
//		{
//			for (; i < iCurrentRecord; i++)
//			{
//				BookInfo[i].no = BookInfo[i + 1].no;	/*���ƺ�һ���ı�ŵ�λ��*/
//				strcpy(BookInfo[i].name, BookInfo[i + 1].name);		/*��������*/
//				strcpy(BookInfo[i].ISBN, BookInfo[i + 1].ISBN);		/*����ISBN��*/
//				strcpy(BookInfo[i].publisher, BookInfo[i + 1].publisher);		/*���Ƴ�����*/
//				strcpy(BookInfo[i].time, BookInfo[i + 1].time);		/*���Ƴ�������*/
//				BookInfo[i].price = BookInfo[i + 1].price;	/*���ƶ���*/
//			}
//			iCurrentRecord--;
//			/*�������һ��ͼ����ϢΪ��ʼֵ*/
//			BookInfo[iCurrentRecord].no = 0;
//			memset(BookInfo[iCurrentRecord].name, 0, 51);
//			memset(BookInfo[iCurrentRecord].ISBN, 0, 14);
//			memset(BookInfo[iCurrentRecord].publisher, 0, 51);
//			memset(BookInfo[iCurrentRecord].time, 0, 20);
//			BookInfo[iCurrentRecord].price = 0.0;
//		}
//	}
//}
//
///*�������ݵ��ļ�*/
//void saveDataToFile(void)
//{
//	int i = 0;
//	FILE* fp;
//	/*�򿪴���ͼ����Ϣ���ļ�bookinfo.dat*/
//	if ((fp = fopen("bookinfo.dat", "wb")) == NULL)
//	{
//		printf("�޷����ļ�bookinfo.dat");
//		return;
//	}
//	/*�ļ��Ѵ򿪣���д������*/
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		/*д��ͼ����Ϣ*/
//		fprintf(fp, "%d\t%s\t%s\t%s\t%s\t%f\r\n",
//			BookInfo[i].no, BookInfo[i].name,
//			BookInfo[i].ISBN, BookInfo[i].publisher,
//			BookInfo[i].time, BookInfo[i].price
//			);
//	}
//
//	printf("���ݱ���ɹ���");
//	fclose;
//}
//
///*���ļ��м�������*/
//void loadDataFromFile(void)
//{
//	int no;					/*ͼ����*/
//	char name[51];			/*����*/
//	char ISBN[14];			/*ISBN��*/
//	char publisher[51];		/*������*/
//	char time[21];			/*��������*/
//	float price;			/*����*/
//
//	FILE* fp;
//	/*�򿪴���ͼ����Ϣ���ļ�bookinfo.dat*/
//	if ((fp = fopen("bookinfo.dat", "wb")) == NULL)
//	{
//		printf("�޷����ļ�bookinfo.dat");
//		return;
//	}
//
//	/*�ļ��Ѵ򿪣����������*/
//	iCurrentRecord = 0;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%d\t%s\t%s\t%s\t%s\t%f\r\n",
//			&BookInfo[iCurrentRecord].no, &BookInfo[iCurrentRecord].name,
//			&BookInfo[iCurrentRecord].ISBN, &BookInfo[iCurrentRecord].publisher,
//			&BookInfo[iCurrentRecord].time, &BookInfo[iCurrentRecord].price);
//		iCurrentRecord++;
//	}
//
//	printf("���ݼ��سɹ���");
//	fclose(fp);
//}
//
///*�����ַ�����������order��ֵΪ0��ʾ���򣬷����ʾ����*/
//void sortByString(char keyWords[MAXRECORDCOUNT][51], int bookNos[MAXRECORDCOUNT], short order)
//{
//	int i = 0, j = 0, minID = 0, iTmp = 0;
//	char tmp[51];
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		minID = i;
//		/*��[i,iCurrentRecord]��Χ������С��Ԫ������λ��*/
//		for (j = i + 1; j < iCurrentRecord; j++)
//		{
//			if (order == 0)/*����*/
//			{
//				if (strcmp(keyWords[j], keyWords[minID]) < 0)minID = j;
//			}
//			else /*����*/
//			{
//				if (strcmp(keyWords[j], keyWords[minID]) > 0)minID = j;
//			}
//		}
//		strcpy(tmp, keyWords[minID]);
//		strcpy(keyWords[minID], keyWords[i]);
//		strcpy(keyWords[i], tmp);
//		iTmp = bookNos[minID];
//		bookNos[minID] = bookNos[i];
//		bookNos[i] = iTmp;
//	}
//}
//
///*������������������*/
//void sortByInt(int keyWords[MAXRECORDCOUNT], int bookNos[MAXRECORDCOUNT], short order)
//{
//	int i = 0, j = 0, minID = 0, iTmp = 0;
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		minID = i;
//		/*��[i,iCurrentRecord]��Χ������С��Ԫ������λ��*/
//		for (j = i + 1; j < iCurrentRecord; j++)
//		{
//			if (order == 0)/*����*/
//			{
//				if (keyWords[j] < keyWords[minID])minID = j;
//			}
//			else /*����*/
//			{
//				if (keyWords[j] > keyWords[minID])minID = j;
//			}
//		}
//		iTmp = keyWords[minID];
//		keyWords[minID] = keyWords[i];
//		keyWords[i] = iTmp;
//		iTmp = bookNos[minID];
//		bookNos[minID] = bookNos[i];
//		bookNos[i] = iTmp;
//	}
//}
//
///*���ݸ��������ݽ�������*/
//void sortByFloat(float keywords[MAXRECORDCOUNT], int bookNos[MAXRECORDCOUNT], short order)
//{
//	int i = 0, j = 0, minID = 0, iTmp = 0;
//	float fTmp=0.0;
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		minID = i;
//		/*��[i,iCurrentRecord]��Χ������С��Ԫ������λ��*/
//		for (j = i + 1; j < iCurrentRecord; j++)
//		{
//			if (order == 0)/*����*/
//			{
//				if (keywords[j] < keywords[minID])minID = j;
//			}
//			else /*����*/
//			{
//				if (keywords[j] > keywords[minID])minID = j;
//			}
//		}
//		iTmp = keywords[minID];
//		keywords[minID] = keywords[i];
//		keywords[i] = iTmp;
//		iTmp = bookNos[minID];
//		bookNos[minID] = bookNos[i];
//		bookNos[i] = iTmp;
//	}
//}
//
///*����ͼ����Ϣ��������*/
//void sortInfo(void)
//{
//	int i = 0;
//	int iCurNo = 0;
//	int iSortField = 0;
//	short sSortOrder = 0;
//	int iKeyWords[MAXRECORDCOUNT];
//	char strKeyWords[MAXRECORDCOUNT][51];
//	float fKeyWords[MAXRECORDCOUNT];
//	int bookNos[MAXRECORDCOUNT];
//
//	/*���ϵͳ���Ƿ������ݣ�����ֱ�ӷ���*/
//	if (iCurrentRecord == 0)
//	{
//		printf("ϵͳ���������ݣ�����¼�����ݻ���ļ��м������ݣ�\n");
//		return;
//	}
//
//	/*ָ��Ҫ�������Ϣ��ͼ���š�������ISBN�š������硢����*/
//	do {
//		printf("ָ��Ҫ�������Ϣ,0:ͼ����,1:����,2:ISBN��3:������4:����\n");
//		scanf("%d", &iSortField);
//		if (iSortField < 0 || iSortField>6)
//		{
//			printf("��������ֲ���ȷ�����������룡\n");
//			continue;
//		}
//		break;
//	} while (1);
//
//	/*ָ������˳��*/
//	do {
//		printf("ָ��Ҫ�����˳��0������1������\n");
//		scanf("%d", &sSortOrder);
//		if (sSortOrder < 0 || sSortOrder>1)
//		{
//			printf("��������ֲ���ȷ�����������룡\n");
//			continue;
//		}
//		break;
//	} while (1);
//
//	/*��ʼ��bookNos����*/
//	for (i = 0; i < MAXRECORDCOUNT; i++)
//	{
//		bookNos[i] = i;
//	}
//
//	/*���ݸ����������ֶΣ�ȡ���ؼ�����Ϣ*/
//	switch (iSortField)
//	{
//	case 0:
//		for (i = 0; i < iCurrentRecord; i++)
//			iKeyWords[i] = BookInfo[i].no;
//		/*����ͼ���Ž�������*/
//		sortByInt(iKeyWords, bookNos, sSortOrder);
//		break;
//	case 1:
//		for (i = 0; i < iCurrentRecord; i++)
//			strcpy(strKeyWords[i], BookInfo[i].name);
//		/*����������������*/
//		sortByString(strKeyWords, bookNos, sSortOrder);
//		break;
//	case 2:
//		for (i = 0; i < iCurrentRecord; i++)
//			strcpy(strKeyWords[i],BookInfo[i].ISBN);
//		/*����ISBN����*/
//		sortByString(strKeyWords, bookNos, sSortOrder);
//		break;
//	case 3:
//		for (i = 0; i < iCurrentRecord; i++)
//			strcpy(strKeyWords[i], BookInfo[i].publisher);
//		/*���ݳ������������*/
//		sortByString(strKeyWords, bookNos, sSortOrder);
//		break;
//	case 4:
//		for (i = 0; i < iCurrentRecord; i++)
//			strcpy(strKeyWords[i],BookInfo[i].time);
//		/*���ݳ���ʱ������*/
//		sortByString(strKeyWords, bookNos, sSortOrder);
//		break;
//	case 5:
//		for (i = 0; i < iCurrentRecord; i++)
//			fKeyWords[i] = BookInfo[i].price;
//		/*���ݶ�������*/
//		sortByFloat(fKeyWords, bookNos, sSortOrder);
//	}
//
//	printf("\n");
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		iCurNo = bookNos[i];
//		printf("%d\t%s\t%s\t%s\t%s\t%f\n",
//			BookInfo[iCurNo].no, BookInfo[iCurNo].name,
//			BookInfo[iCurNo].ISBN, BookInfo[iCurNo].publisher,
//			BookInfo[iCurNo].time, BookInfo[iCurNo].price
//		);
//	}
//}
//
///*�˳�ϵͳ*/
//void exitSystem(void)
//{
//	char cExit;
//	/*ѯ���û��Ƿ��˳�ϵͳ*/
//	printf("�Ƿ��˳�ϵͳ��Y/N����");
//	scanf("%c", &cExit);
//	getchar();
//	if (toupper(cExit) == 'N')return;
//	exit(1);
//}