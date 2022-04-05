#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
/*
int main()
{
	printf("hehe\n");
	return 0;
}
*/

/*
int main()
{
	//char -- 字符数据
	//short int -- 短整型
	//int -- 整型
	//long -- 长整型
	char ch = 'A';
	printf("%c\n", ch);//%c -- 打印字符格式的数据
	int age = 20;
	printf("%d\n", age);//%d -- 打印整型十进制数据
	return 0;
	//%c
	//%d
	//%f
	//%lf
	//%zu
	//%p -- 以地址的形式打印
	//%x -- 打印16进制的数据
}
*/

/*
int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	return 0;
}
*/

/*
变量的分类
1. 局部变量
2. 全局变量
*/

/*
int a = 100;
int main()
{
	int a = 10;
	printf("%d\n", a);
	//局部变量与全局变量的名字建议不要相同，容易产生bug
	//当局部变量和全局变量名字相同的时候，局部变量优先
	return 0;
}
*/

/*
int main()
{
	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	//输入函数
	scanf("%d%d", &num1, &num2);//& -- 取地址符号
	//C语言语法规定，变量要定义在当前代码块的最前面（新版本可以放后面）
	int sum = 0;
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}
*/

/*
int main()
{
	//未声明的标识符
	//声明extern外部符号的
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
}
*/