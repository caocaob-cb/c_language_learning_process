#define _CRT_SECURE_NO_WARNINGS = 1

#include<stdio.h>


//#include<stdio.h>
//
//int main()
//{
//	int score = 0;
//	printf("请输入成绩\n");
//	scanf("%d", &score);
//	printf("成绩是%d\n", score);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int rescan = 0;
//	rescan = scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d 是奇数\n", num);
//	else
//		printf("%d 是偶数\n", num);
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	int rescan = 0;
//	rescan = scanf("%d", &age);
//	if (age >= 18)
//		printf("成年，年纪是%d", age);
//	else
//		printf("未成年，年纪是%d", age);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int rescan = 0;
//	rescan = scanf("%d", &num);
//	if (num == 0)
//		printf("数字为零");
//	else
//	{
//		if (num > 0)
//			printf("数字为正数");
//		else
//			printf("数字为负数");
//	}
//	return 0;
//}



//请计算a 除以b的整数商和余数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ra = 0;
//	int rb = 0;
//	ra = scanf("%d", &a);
//	rb = scanf("%d", &b);
//	if (a >= 1)
//	{
//		if (b <= 10000)
//			printf("a除以b的商是%d，余数是%d\n", a / b, a % b);
//	}
//	else
//		printf("输入数值范围错误\n");
//	return 0;
//}
//


////你是天才吗？
//int main()
//{
//	int IQ = 0;
//	int rescan = scanf("%d", &IQ);
//	if (IQ >= 140)
//		printf("genius");
//	else
//		printf("你是猪");
//	return 0;
//}



////判断两个数的大小关系
//int a, b;
//
//int main()
//{
//	while (scanf("%d%d", &a, &b) != EOF )
//	{
//		if (a >= 0 || b >= 0)
//		{
//			if (a == b)
//			
//				printf("%d=%d\n", a, b);
//	
//			if (a > b)
//			
//				printf("%d>%d\n", a, b);
//		
//			if (a < b)
//			
//				printf("%d<%d\n", a, b);
//		}
//		
//	}
//	
//	return 0;
//}



////5的整除
//int main()
//{
//	int a = 0;
//	int b = scanf("%d", &a);
//	if (a % 5 == 0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}


int a = 0;

int main()
{
	while (scanf("%d", &a) != EOF)
	{
		printf("*");
		
	}
	return 0;
}