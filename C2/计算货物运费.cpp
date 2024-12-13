//#include<stdio.h>
//
//int main()
//{
//	int p, w, s, f;
//	float d;
//	scanf_s("%d %d %d", &p, &w, &s);
//	if (s < 250)
//		d = 0;
//	else if (250 <= s < 500)
//		d = 0.02;
//	else if (500 <= s < 1000)
//		d = 0.05;
//	else if (1000 <= s < 2000)
//		d = 0.08;
//	else if (2000 <= s < 3000)
//		d = 0.1;
//	else if (s >= 3000)
//		d = 0.15;
//	f =p * w * s * (1-d);
//	printf("%.4f",(float)f);
//
//	return 0;
//}