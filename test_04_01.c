#define _CRT_SECURE_NO_WARNINGS 1

//scanf��C�����ṩ��
//scanf_s���Ǳ�׼C�����ṩ�ģ���VS�������ṩ��
#include <stdio.h>
#include <string.h>


//int main()
//{
//	//const -- ������
//	//const���εĳ�����
//	const num = 4;
//	printf("%d", num);
//	/*
//	const int n = 10;//n�Ǳ������������г����ԣ�����nΪ������
//	int arr[n] = 10;//��������
//	*/
//	//3 -- ���泣��
//	//3.14 -- ���泣��
//	return 0;
//}


////#define����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d", MAX);
//	return 0;
//}


////ö�ٳ���
////ö�� -- һһ�о�
////�Ա��У�Ů������
////��ԭɫ���죬�ƣ���
////���ڣ�1��2��3��4��5��6��7
////enum -- ö�ٹؼ���
//enum SEX
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRT -- ö�ٳ���
//int main()
//{
//	enum SEX s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	printf("%d\n", s);
//	return 0;
//}


////�ַ�������
////ASCII����
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";//���ַ���
//	char arr1[] = "abc";//����
//	char arr2[] = { 'a','b','c','\0'};
//	//"abc" -- 'a' 'b' 'c' '\0' -- '\0'���ַ����Ľ�����־
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//ctrl F10 -- ����̣�����
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));//strlen -- string length -- �����ַ�������
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}


////ת���ַ� -- ת��ԭ������˼
////\n -- ����
////\t -- ˮƽ�Ʊ��
////\\ -- ���ڱ�ʾһ����б�ܣ���ֹ������Ϊת���ַ�
//int main()
//{
//  printf("abc\0def")
//	printf("c:\\test\\32\\test.c\n");
//	printf("%c\n", '\'');
//	printf("%d\n", strlen("c:\test\32\test.c\n"));
//	printf("%c\n", '\32');
//	//\32 -- 32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ��Ӧ���ַ�
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
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while(line<20000)
//	{
//		printf("��һ�д��� %d\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("��offer\n");
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
//	printf("��������������:>");
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
//	//char ch[20];
//	//float arr2[5];
//	printf("%d\n", arr1[4]);//�±�ķ�ʽ����Ԫ�� arr1[�±�]
//	//�±�Ĭ���Ǵ�0��ʼ
//	int i = 0;
//	while (i < 5)
//	{
//		printf("%d ", arr1[i]);
//		i++;
//	}
//	return 0;
//}


//����������: + - * / %
//��(2����)λ������: << >>
//λ(2����)����: &(��λ��) |(��λ��) ^(��λ���)
//& -- 011 + 101 = 001
//| -- 011 + 101 = 111
//^�ļ������: ��Ӧ�Ķ�����λ��ͬ��Ϊ0����Ӧ�Ķ�����λ������Ϊ1
//^ -- 011 + 101 = 110
//��ֵ������: = += -= *= /= &= |= ^= >>= <<=
//��Ŀ������(һ��������): !(�߼���������) - + & sizeof ...... 
//˫Ŀ������(����������): 
//��Ŀ������(����������):

int main()
{
    printf("%d\n", strlen("c:\test\121"));
        return 0;
}