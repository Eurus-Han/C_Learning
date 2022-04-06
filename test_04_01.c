#define _CRT_SECURE_NO_WARNINGS 1

//scanf是C语言提供的
//scanf_s不是标准C语言提供的，是VS编译器提供的
#include <stdio.h>
#include <string.h>


//int main()
//{
//	//const -- 常属性
//	//const修饰的常变量
//	const num = 4;
//	printf("%d", num);
//	/*
//	const int n = 10;//n是变量，但是又有常属性，所以n为常变量
//	int arr[n] = 10;//不能运行
//	*/
//	//3 -- 字面常量
//	//3.14 -- 字面常量
//	return 0;
//}


////#define定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d", MAX);
//	return 0;
//}


////枚举常量
////枚举 -- 一一列举
////性别：男，女，保密
////三原色：红，黄，蓝
////星期：1，2，3，4，5，6，7
////enum -- 枚举关键字
//enum SEX
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRT -- 枚举常量
//int main()
//{
//	enum SEX s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	printf("%d\n", s);
//	return 0;
//}


////字符串类型
////ASCII编码
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";//空字符串
//	char arr1[] = "abc";//数组
//	char arr2[] = { 'a','b','c','\0'};
//	//"abc" -- 'a' 'b' 'c' '\0' -- '\0'是字符串的结束标志
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//ctrl F10 -- 逐过程，监视
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));//strlen -- string length -- 计算字符串长度
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}


////转义字符 -- 转变原来的意思
////\n -- 换行
////\t -- 水平制表符
////\\ -- 用于表示一个反斜杠，防止被解释为转义字符
//int main()
//{
//  printf("abc\0def")
//	printf("c:\\test\\32\\test.c\n");
//	printf("%c\n", '\'');
//	printf("%d\n", strlen("c:\test\32\test.c\n"));
//	printf("%c\n", '\32');
//	//\32 -- 32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值对应的字符
//	return 0;
//}



//int main()
//{
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while(line<20000)
//	{
//		printf("敲一行代码 %d\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("好offer\n");
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整型数字的数组
//	//char ch[20];
//	//float arr2[5];
//	printf("%d\n", arr1[4]);//下标的方式访问元素 arr1[下标]
//	//下标默认是从0开始
//	int i = 0;
//	while (i < 5)
//	{
//		printf("%d ", arr1[i]);
//		i++;
//	}
//	return 0;
//}


//算数操作符: + - * / %
//移(2进制)位操作符: << >>
//位(2进制)操作: &(按位与) |(按位或) ^(按位异或)
//& -- 011 + 101 = 001
//| -- 011 + 101 = 111
//^的计算规律: 对应的二进制位相同则为0，对应的二进制位相异则为1
//^ -- 011 + 101 = 110
//赋值操作符: = += -= *= /= &= |= ^= >>= <<=
//单目操作符(一个操作数): !(逻辑反操作符) - + & sizeof ...... 
//双目操作符(两个操作数): 
//三目操作符(三个操作数):

int main()
{
    printf("%d\n", strlen("c:\test\121"));
        return 0;
}