//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a, b, c;
//	int derta;
//	printf("1.һԪһ�Σ�\n");
//	printf("2.һԪ���Σ�\n");
//	printf("3.��Ԫһ�Σ�\n");
//	while(1)
//	{
//		printf("���������ķ������ͣ�����ţ���");
//		int n;
//		do
//		{
//			scanf_s("%d", &n);
//			if (n == 1 || n == 2 || n == 3) break;
//			else printf("����һ�û��ѧ�ᣬ���������룺");
//		} while (1);
//		switch (n)
//		{
//		case 1:
//		{
//			printf("������a,b(ax+b=0):");
//			scanf_s("%d %d", &a, &b);
//			printf("x=%.4g\n", (float)(-b / a));
//			break;
//		}
//		case 2:
//		{
//			printf("������a,b,c(ax**2+bx+c=0):");
//			scanf_s("%d %d %d", &a, &b, &c);
//			derta = b * b - 4 * a * c;
//			if (a == 0)
//			{
//				printf("�÷��̲���һԪ���η���\n");
//			}
//			else
//			{
//				if (derta == 0)
//				{
//					printf("x1=x2=%.4g\n", (float)(-b + sqrt(derta)) / (2*a));
//				}
//				else if (derta > 0)
//				{
//					printf("x1=%.4g x2=%.4g\n", (float)(-b + sqrt(derta)) / (2 * a), (float)(-b - sqrt(derta)) / (2 * a));
//				}
//				else
//				{
//					printf("complex roots:x1=%.4f+%.4fi x2=%.4f-%.4fi\n", (float)-b / (2*a), sqrt(-derta) / (2*a), (float)-b / (2*a), sqrt(-derta) / (2*a));
//				}
//			}
//			break;
//		}
//		case 3:
//		{
//			int a, b, c, d, e, f, x, y;
//			printf("������a,b,c,d(ax+by+c=0,dx+ey+f=0):");
//			scanf_s("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
//			y = (c * d - a * f) / (e * a - b * d);
//			x = (-b * y - c) / a;
//			printf("x=%.4g y=%.4g\n", (float)x, (float)y);
//		}
//		}
//	}
//		return 0;
//}