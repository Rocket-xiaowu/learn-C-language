//#include<stdio.h>
//
////������תʮ����
//int Binary_To_Decimal(int binary)
//{
//	int decimal = 0, base = 1;
//	while (binary > 0)
//	{
//		if (binary % 10 == 1)decimal += base;
//		binary /= 10;
//		base *= 2;
//	}
//	return decimal;
//}
//
////ʮ����ת������
//void Decimal_To_Binary(int decimal)
//{
//	int a[100],i=0;
//	while (decimal!=0)
//	{
//		a[i] = decimal % 2;
//		decimal /= 2;
//		i++;
//	}
//	for (int j = i - 1; j >= 0; j--)printf("%d", a[j]);
//}
//
//int main()
//{
//	int binary;
//	printf("�����������������");
//	scanf_s("%d", &binary);
//	int decimal = Binary_To_Decimal(binary);
//	printf("ת�����ʮ������Ϊ��%d\n", decimal);
//	Decimal_To_Binary(decimal);
//	return 0;
//}