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
	//char -- �ַ�����
	//short int -- ������
	//int -- ����
	//long -- ������
	char ch = 'A';
	printf("%c\n", ch);//%c -- ��ӡ�ַ���ʽ������
	int age = 20;
	printf("%d\n", age);//%d -- ��ӡ����ʮ��������
	return 0;
	//%c
	//%d
	//%f
	//%lf
	//%zu
	//%p -- �Ե�ַ����ʽ��ӡ
	//%x -- ��ӡ16���Ƶ�����
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
�����ķ���
1. �ֲ�����
2. ȫ�ֱ���
*/

/*
int a = 100;
int main()
{
	int a = 10;
	printf("%d\n", a);
	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ�����ײ���bug
	//���ֲ�������ȫ�ֱ���������ͬ��ʱ�򣬾ֲ���������
	return 0;
}
*/

/*
int main()
{
	//�����������ĺ�
	int num1 = 0;
	int num2 = 0;
	//���뺯��
	scanf("%d%d", &num1, &num2);//& -- ȡ��ַ����
	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ�棨�°汾���Էź��棩
	int sum = 0;
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}
*/

/*
int main()
{
	//δ�����ı�ʶ��
	//����extern�ⲿ���ŵ�
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
}
*/