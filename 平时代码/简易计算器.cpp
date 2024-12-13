//#include<stdio.h>
//
//int main()
//{
//	double x1, x2, y;
//	int option;
//
//	printf("=========简易计算器=========\n");
//	printf("1.加法运算\n");
//	printf("2.减法运算\n");
//	printf("3.乘法运算\n");
//	printf("4.除法运算\n");
//	printf("您要执行的运算是（请输入上述菜单项前的编号）：");
//
//	do
//	{
//		scanf_s("%d", &option);  //接收功能选择
//		if (option < 1 || option>4)  //验证所输入的功能选择编号是否合法
//			printf("输入有误（合法的操作功能编号为1~4），请重新输入：");
//		else
//			break;
//	} while (1);  //1为恒真，表示这个循环要一直执行，直到输入合法才能break退出
//
//	//输入提示信息和接收操作数
//	printf("请输入两个小数，以空格作为分隔符：");
//	scanf_s("%lf%lf", &x1, &x2);
//	//根据功能选择编号进行判断和执行相应的运算
//	switch (option)
//	{
//	case 1:
//		y = x1 + x2;
//		printf("%.2lf + %.2lf的计算结果为：%.2lf\n", x1, x2, y);
//		break;
//	case 2:
//		y = x1 - x2;
//		printf("%.2lf - %.2lf的计算结果为：%.2lf\n", x1, x2, y);
//		break;
//	case 3:
//		y = x1 * x2;
//		printf("%.2lf * %.2lf的计算结果为：%.2lf\n", x1, x2, y);
//		break;
//	case 4:
//		y = x1 / x2;
//		printf("%.2lf / %.2lf的计算结果为：%.2lf\n", x1, x2, y);
//	}
//	return 0;
//}