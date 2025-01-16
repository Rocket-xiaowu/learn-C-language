//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
//
//#define MAXRECORDCOUNT 1000 /*定义最大记录数*/
//
//typedef struct book {
//	int no;					/*图书编号*/
//	char name[51];			/*名称*/
//	char ISBN[14];			/*ISBN号*/
//	char publisher[51];		/*出版日期*/
//	char time[21];			/*出版时间*/
//	float price;			/*定价*/
//}Book;
//
//Book BookInfo[MAXRECORDCOUNT];
//int iCurrentRecord = 0; /*当前记录的编号*/
//char strTmp[51];
//
//void initData(void);					/*初始化数据*/
//void PrintMenu(void);					/*输出菜单选项信息*/
//void inputBookInfo(void);				/*录入图书信息*/
//void searchBookInfo(void);				/*查询图书信息*/
//void modifyBookInfo(void);				/*修改图书信息*/
//void deleteBookInfo(void);				/*删除图书信息*/
//void saveDataToFile(void);				/*保存数据到文件*/
//void loadDataFromFile(void);			/*从文件加载数据*/
//void exitSystem(void);					/*退出系统*/
//void sortInfo(void);					/*根据图书信息进行排序*/
//char* getChars(unsigned int count);		/*获取字符串并验证其有效性*/
//
//int main()
//{
//	int iSelected = 0;
//	system("color 0A");	/*设置屏幕的背景色为0(黑色)，前景色为A(淡绿色)*/
//	do {
//		PrintMenu();	/*输出菜单选项信息*/
//		scanf("%d", &iSelected);	/*输入选项*/
//		getchar();	/*接收输入选项值Selecteds时所输入的那个回车*/
//		system("cls");	/*清除屏幕上的信息*/
//
//		/*根据选项执行相应的动作*/
//		switch (iSelected)
//		{
//		case 0:
//			printf("当前操作：初始化数据\n\n");
//			initData();
//			break;	/*初始化数据*/
//		case 1:
//			printf("当前操作：录入图书信息\n\n");
//			inputBookInfo();
//			break;	/*录入图书信息*/
//		case 2:
//			printf("当前操作：查询图书信息\n\n");
//			searchBookInfo();
//			break;	/*查询图书信息*/
//		case 3:
//			printf("当前操作：修改图书信息\n\n");
//			modifyBookInfo();
//			break;	/*修改图书信息*/
//		case 4:
//			printf("当前操作：删除图书信息\n\n");
//			deleteBookInfo();
//			break;	/*删除图书信息*/
//		case 5:
//			printf("当前操作：图书信息排序\n\n");
//			sortInfo();
//			break;	/*排序图书信息*/
//		case 6:
//			printf("当前操作：保存数据到文件\n\n");
//			saveDataToFile();
//			break;	/*保存数据到文件*/
//		case 7:
//			printf("当前操作：从文件加载数据\n\n");
//			loadDataFromFile();
//			break;	/*从文件加载数据*/
//		case 8:
//			printf("当前操作：退出系统\n\n");
//			exitSystem();
//			break;	/*退出系统*/
//		default:
//			printf("您所输入的编号不正确，请重新输入\n\n");
//			break;
//		}
//
//		printf("\n");
//		system("pause");	/*显示“按任意键继续...”信息*/
//		system("cls");	/*清除屏幕上的信息*/
//	} while (1);
//	return 0;
//}
//
///*输出菜单选项信息*/
//void PrintMenu(void)
//{
//	int i = 0;
//	/*输出头部的分隔线*/
//	printf("╔");
//	for (i = 0; i < 56; i++)
//	{
//		printf("=");
//	}
//
//	printf("╗\n");/*输出换行*/
//
//	/*输出中间部分的内容*/
//	printf("║ 数组储存演示：请选择所要执行的操作（输入相应的编号）   ║\n");
//	printf("║ 0.%-52s ║\n", "初始化数据");
//	printf("║ 1.%-52s ║\n", "录入图书信息");
//	printf("║ 2.%-52s ║\n", "查询图书信息");
//	printf("║ 3.%-52s ║\n", "修改图书信息");
//	printf("║ 4.%-52s ║\n", "删除图书信息");
//	printf("║ 5.%-52s ║\n", "图书信息排序");
//	printf("║ 6.%-52s ║\n", "保存数据到文件");
//	printf("║ 7.%-52s ║\n", "从文件加载数据");
//	printf("║ 8.%-52s ║\n", "退出系统");
//
//	/*输出底部的分隔线*/
//	printf("╚");/*输出换行*/
//	for (i = 0; i < 56; i++)
//	{
//		printf("=");
//	}
//	printf("╝\n");/*输出换行*/
//}
//
///*初始化数据*/
//void initData(void)
//{
//	int i = 0;
//	char cInit;
//	/*询问用户是否初始化数据*/
//	printf("是否初始化数据（Y/N）？");
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
//			/*将数据空间置空*/
//			BookInfo[i].no = 0;
//			memset(BookInfo[i].name, 0, 51);
//			memset(BookInfo[i].ISBN, 0, 14);
//			memset(BookInfo[i].publisher, 0, 51);
//			memset(BookInfo[i].time, 0, 20);
//			BookInfo[i].price = 0.0;
//		}
//		iCurrentRecord = 0;/*当前记录设置为0*/
//
//		printf("数据初始化成功！\n");
//	}
//}
//
///*获取字符串并检验其有效性*/
//char* getChars(unsigned int count)
//{
//	do {
//		fgets(strTmp, 50, stdin);/*获取数据*/
//	} while (strlen(strTmp) > count + 1);
//	strTmp[strlen(strTmp)] = '\0';
//	return strTmp;
//}
//
///*录入图书信息*/
//void inputBookInfo(void)
//{
//	char strName[51];			 /*书名*/
//	char strISBN[14];			 /*ISBN号*/
//	char strPublisher[51];		 /*出版社*/
//	char strTime[21];			 /*出版日期*/
//	float price;				 /*定价*/
//	char cExit;
//
//	do {
//		/*录入书名、ISBN号、出版社、定价*/
//		printf("请输入书名（不多于50位数，示例：C程序设计）：");
//		strcpy(strName, getChars(50));
//		printf("请输入ISBN号（不多于13位数，示例：9787302226727");
//		strcpy(strISBN, getChars(13));
//		printf("请输入出版社（不多于50位数，示例：贵州大学出版社）：");
//		strcpy(strPublisher, getChars(50));
//		printf("请输入出版日期（不多于20位数，示例：2024-12-9）：");
//		strcpy(strTime, getChars(20));
//		printf("请输入定价（示例：33.00）：");
//		scanf("%f", &price);
//
//		/*保存信息*/
//		BookInfo[iCurrentRecord].no = iCurrentRecord + 1;
//		strcpy(BookInfo[iCurrentRecord].name, strName);
//		strcpy(BookInfo[iCurrentRecord].ISBN, strISBN);
//		strcpy(BookInfo[iCurrentRecord].publisher, strPublisher);
//		strcpy(BookInfo[iCurrentRecord].time, strTime);
//		BookInfo[iCurrentRecord].price = price;
//
//		iCurrentRecord++;/*当前记录编号自增*/
//		/*接收录入定价时键盘输入的回车符，以免无法正常作“是否结束录入”判断*/
//		getchar();
//		/*询问用户是否结束录入*/
//		printf("是否结束录入（Y/N）？");
//		scanf("%c", &cExit);
//		getchar();/*接收键盘输入的回车符，以免下次信息录入受影响*/
//	} while (toupper(cExit) == 'N');
//}
//
///*查询图书信息*/
//void searchBookInfo(void)
//{
//	int i = 0;
//	char strName[51];
//	printf("查看全部图书信息（Y/N）？");
//	if (toupper(getchar()) == 'Y')
//	{
//		if (iCurrentRecord == 0)
//		{
//			printf("系统中暂时没有任何图书数据！\n");
//		}
//		else
//		{
//			/*查看全部信息*/
//			printf("编号\t书名\tISBN号\t出版社\t出版日期\t定价\n");
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
//		getchar();/*接收上次录入的回车符*/
//
//		/*查询指定书名的图书信息*/
//		printf("请指定所要查询的书名：");
//		strcpy(strName, getChars(50));
//		for (i = 0; i < iCurrentRecord; i++)
//		{
//			/*当前遍历的图书书名与指定书名一致，输出其完整信息*/
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
//			printf("不存在书名为《%s》的图书信息\n", strName);
//		}
//	}
//}
//
///*修改图书信息*/
//void modifyBookInfo(void)
//{
//	int i = 0;
//	int iModifyField = 0;
//	char strName[51];	/*待修改信息的图书的书名信息*/
//	/*指定待修改图书的书名信息*/
//	printf("请指定待修改信息的图书的书名：");
//	strcpy(strName, getChars(50));
//
//	/*找到待修改信息的图书并进行修改*/
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		/*当前遍历的图书书名与指定的书名一致，则输出其完整信息*/
//		if (strcmp(BookInfo[i].name, strName) == 0)
//		{
//			/*指定要修改的信息：书名、ISBN号、出版社、出版日期、定价*/
//			do {
//				printf("指定要修改的信息：0：书名 1：ISBN号 2：出版社 3：出版日期 4：定价\n");
//				scanf("%d", &iModifyField);
//				if (iModifyField < 0 || iModifyField>6)
//				{
//					printf("输入的数字不正确，请重新输入！\n");
//					continue;
//				}
//				else
//				{
//					getchar();/*接收上次输入操作的回车符*/
//					switch (iModifyField)
//					{
//					case 0:
//						printf("原书名为%s，请输入新的书名：",BookInfo[i].name);
//						strcpy(BookInfo[i].name, getChars(50));
//						getchar();
//						break;
//					case 1:
//						printf("原ISBN号为%s，请输入新的ISBN号：", BookInfo[i].ISBN);
//						strcpy(BookInfo[i].ISBN, getChars(13));
//						getchar();
//						break;
//					case 2:
//						printf("原出版社为%s，请输入新的出版社：", BookInfo[i].publisher);
//						strcpy(BookInfo[i].publisher, getChars(50));
//						getchar();
//						break;
//					case 3:
//						printf("原出版日期为%s，请输入新的出版日期：", BookInfo[i].time);
//						strcpy(BookInfo[i].time, getChars(20));
//						getchar();
//						break;
//					case 4:
//						printf("原价为%.2f，请输入新的定价：");
//						scanf("%f", &(BookInfo[i].price));
//						break;
//					}
//
//					printf("是否继续修改该图书的信息？（Y/N）：");
//					if (toupper(getchar()) == 'N')break;
//				}
//			} while (1);
//			/*修改之后输出图书的完整信息*/
//			printf("%d\t%s\t%s\t%s\t%s\t%f\n",
//				BookInfo[i].no, BookInfo[i].name,
//				BookInfo[i].ISBN, BookInfo[i].publisher,
//				BookInfo[i].time, BookInfo[i].price);
//			break;
//		}
//	}
//	if (i == iCurrentRecord)
//	{
//		printf("不存在书名为《%s》的图书信息\n", strName);
//	}
//}
//
///*删除图书信息*/
//void deleteBookInfo(void)
//{
//	int i = 0;
//	char strName[51];	/*待删除图书的书名信息*/
//	/*指定待删除图书的书名信息*/
//	printf("请指定待删除图书的书名：");
//	strcpy(strName, getChars(50));
//
//	/*找到待删除图书并删除之*/
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		/*当前遍历的图书书名与指定书名一致，则删除其信息*/
//		if (strcmp(BookInfo[i].name, strName) == 0)
//		{
//			/*将数据空间置空*/
//			BookInfo[i].no = 0;
//			memset(BookInfo[i].name, 0, 51);
//			memset(BookInfo[i].ISBN, 0, 14);
//			memset(BookInfo[i].publisher, 0, 51);
//			memset(BookInfo[i].time, 0, 20);
//			BookInfo[i].price = 0.0;
//			break;
//		}
//	}
//	if (i == iCurrentRecord) printf("不存在书名为《%s》的图书信息\n", strName);
//	else
//	{
//		/*若删除的图书不是最后一本书，则将后面的图书信息依次往前移一位*/
//		if (i < iCurrentRecord - 1)
//		{
//			for (; i < iCurrentRecord; i++)
//			{
//				BookInfo[i].no = BookInfo[i + 1].no;	/*复制后一个的编号到位置*/
//				strcpy(BookInfo[i].name, BookInfo[i + 1].name);		/*复制书名*/
//				strcpy(BookInfo[i].ISBN, BookInfo[i + 1].ISBN);		/*复制ISBN号*/
//				strcpy(BookInfo[i].publisher, BookInfo[i + 1].publisher);		/*复制出版社*/
//				strcpy(BookInfo[i].time, BookInfo[i + 1].time);		/*复制出版日期*/
//				BookInfo[i].price = BookInfo[i + 1].price;	/*复制定价*/
//			}
//			iCurrentRecord--;
//			/*重置最后一本图书信息为初始值*/
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
///*保存数据到文件*/
//void saveDataToFile(void)
//{
//	int i = 0;
//	FILE* fp;
//	/*打开储存图书信息的文件bookinfo.dat*/
//	if ((fp = fopen("bookinfo.dat", "wb")) == NULL)
//	{
//		printf("无法打开文件bookinfo.dat");
//		return;
//	}
//	/*文件已打开，则写入数据*/
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		/*写入图书信息*/
//		fprintf(fp, "%d\t%s\t%s\t%s\t%s\t%f\r\n",
//			BookInfo[i].no, BookInfo[i].name,
//			BookInfo[i].ISBN, BookInfo[i].publisher,
//			BookInfo[i].time, BookInfo[i].price
//			);
//	}
//
//	printf("数据保存成功！");
//	fclose;
//}
//
///*从文件中加载数据*/
//void loadDataFromFile(void)
//{
//	int no;					/*图书编号*/
//	char name[51];			/*书名*/
//	char ISBN[14];			/*ISBN号*/
//	char publisher[51];		/*出版社*/
//	char time[21];			/*出版日期*/
//	float price;			/*定价*/
//
//	FILE* fp;
//	/*打开储存图书信息的文件bookinfo.dat*/
//	if ((fp = fopen("bookinfo.dat", "wb")) == NULL)
//	{
//		printf("无法打开文件bookinfo.dat");
//		return;
//	}
//
//	/*文件已打开，则加载数据*/
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
//	printf("数据加载成功！");
//	fclose(fp);
//}
//
///*根据字符串进行排序，order的值为0表示升序，否则表示降序*/
//void sortByString(char keyWords[MAXRECORDCOUNT][51], int bookNos[MAXRECORDCOUNT], short order)
//{
//	int i = 0, j = 0, minID = 0, iTmp = 0;
//	char tmp[51];
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		minID = i;
//		/*从[i,iCurrentRecord]范围中找最小的元素所在位置*/
//		for (j = i + 1; j < iCurrentRecord; j++)
//		{
//			if (order == 0)/*升序*/
//			{
//				if (strcmp(keyWords[j], keyWords[minID]) < 0)minID = j;
//			}
//			else /*降序*/
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
///*根据整型数进行排序*/
//void sortByInt(int keyWords[MAXRECORDCOUNT], int bookNos[MAXRECORDCOUNT], short order)
//{
//	int i = 0, j = 0, minID = 0, iTmp = 0;
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		minID = i;
//		/*从[i,iCurrentRecord]范围中找最小的元素所在位置*/
//		for (j = i + 1; j < iCurrentRecord; j++)
//		{
//			if (order == 0)/*升序*/
//			{
//				if (keyWords[j] < keyWords[minID])minID = j;
//			}
//			else /*降序*/
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
///*根据浮点型数据进行排序*/
//void sortByFloat(float keywords[MAXRECORDCOUNT], int bookNos[MAXRECORDCOUNT], short order)
//{
//	int i = 0, j = 0, minID = 0, iTmp = 0;
//	float fTmp=0.0;
//	for (i = 0; i < iCurrentRecord; i++)
//	{
//		minID = i;
//		/*从[i,iCurrentRecord]范围中找最小的元素所在位置*/
//		for (j = i + 1; j < iCurrentRecord; j++)
//		{
//			if (order == 0)/*升序*/
//			{
//				if (keywords[j] < keywords[minID])minID = j;
//			}
//			else /*降序*/
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
///*根据图书信息进行排序*/
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
//	/*检测系统中是否有数据，若无直接返回*/
//	if (iCurrentRecord == 0)
//	{
//		printf("系统中尚无数据，请先录入数据或从文件中加载数据！\n");
//		return;
//	}
//
//	/*指定要排序的信息：图书编号、书名、ISBN号、出版社、定价*/
//	do {
//		printf("指定要排序的信息,0:图书编号,1:书名,2:ISBN号3:出版社4:定价\n");
//		scanf("%d", &iSortField);
//		if (iSortField < 0 || iSortField>6)
//		{
//			printf("输入的数字不正确，请重新输入！\n");
//			continue;
//		}
//		break;
//	} while (1);
//
//	/*指定排序顺序*/
//	do {
//		printf("指定要排序的顺序，0：升序，1：降序\n");
//		scanf("%d", &sSortOrder);
//		if (sSortOrder < 0 || sSortOrder>1)
//		{
//			printf("输入的数字不正确，请重新输入！\n");
//			continue;
//		}
//		break;
//	} while (1);
//
//	/*初始化bookNos数组*/
//	for (i = 0; i < MAXRECORDCOUNT; i++)
//	{
//		bookNos[i] = i;
//	}
//
//	/*根据给定的排序字段，取出关键字信息*/
//	switch (iSortField)
//	{
//	case 0:
//		for (i = 0; i < iCurrentRecord; i++)
//			iKeyWords[i] = BookInfo[i].no;
//		/*根据图书编号进行排序*/
//		sortByInt(iKeyWords, bookNos, sSortOrder);
//		break;
//	case 1:
//		for (i = 0; i < iCurrentRecord; i++)
//			strcpy(strKeyWords[i], BookInfo[i].name);
//		/*根据书名进行排序*/
//		sortByString(strKeyWords, bookNos, sSortOrder);
//		break;
//	case 2:
//		for (i = 0; i < iCurrentRecord; i++)
//			strcpy(strKeyWords[i],BookInfo[i].ISBN);
//		/*根据ISBN排序*/
//		sortByString(strKeyWords, bookNos, sSortOrder);
//		break;
//	case 3:
//		for (i = 0; i < iCurrentRecord; i++)
//			strcpy(strKeyWords[i], BookInfo[i].publisher);
//		/*根据出版社进行排序*/
//		sortByString(strKeyWords, bookNos, sSortOrder);
//		break;
//	case 4:
//		for (i = 0; i < iCurrentRecord; i++)
//			strcpy(strKeyWords[i],BookInfo[i].time);
//		/*根据出版时间排序*/
//		sortByString(strKeyWords, bookNos, sSortOrder);
//		break;
//	case 5:
//		for (i = 0; i < iCurrentRecord; i++)
//			fKeyWords[i] = BookInfo[i].price;
//		/*根据定价排序*/
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
///*退出系统*/
//void exitSystem(void)
//{
//	char cExit;
//	/*询问用户是否退出系统*/
//	printf("是否退出系统（Y/N）？");
//	scanf("%c", &cExit);
//	getchar();
//	if (toupper(cExit) == 'N')return;
//	exit(1);
//}