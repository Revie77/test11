#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

/**

�ܽ᣺
		�����������壺
		1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
		2. & ���������������������ʾ�������飬ȡ��������������ĵ�ַ��
		3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��*/
int main() {
	
	/*
	//��ά����
	//��λ������������*a�ǵ���Ԫ��a[0]����һ�еĵ�ַ��,*a[0]��a[0][0]�ĵ�ַ����һ�е�һ���ĵ�ַ��
	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	printf("%d\n", sizeof(a));			//48
	printf("%d\n", sizeof(a[0][0]));		//4
	printf("%d\n", sizeof(a[0]));			//4or8		�⣺16��a[0]�Ƕ�ά�����һ����Ԫ�أ�δ�������㣬������ǵ�һ�еĵ�ַ���������еĳ���  
	printf("%d\n", sizeof(a[0] + 1));		//a[0][1]�ĵ�ַ��4or8 
	printf("%d\n", sizeof(*(a[0] + 1)));	//4
	printf("%d\n", sizeof(a + 1));		//a�Ƕ�ά�������������û�н���&a���ߵ���sizeof(a)������a�Ƕ�ά������Ԫ�صĵ�ַ�����԰Ѷ�ά���鿴������Ϊ3��һά���飬ÿ��Ԫ�ؾ���һ�У�����a+1���ǵڶ���Ԫ�ص�ַ
	printf("%d\n", sizeof(*(a + 1)));		//4			�⣺16�����Ͽɵ�a+1�ǵڶ�����Ԫ�صĵ�ַ����������û�õڶ��еĵ�ַ���Ž�sizeof�о��൱�ڵ�������һ��һά��������������������һά����ĳ���
	printf("%d\n", sizeof(&a[0] + 1));	//ȡ����һ��Ԫ�أ���һ�У���������a[0]�ĵ�ַ+1��õ��ڶ���Ԫ��a[1]�ĵ�ַ 4or8
	printf("%d\n", sizeof(*(&a[0] + 1)));	//4������	�⣺16�����Ͽɵ�
	printf("%d\n", sizeof(*a));			//4or8		16
	printf("%d\n", sizeof(a[3]));			//16

	*/
	/*=============================================================================================================================================*/
	
	/*
	* 
	//�ַ�����sizeof()��strlen()
	 char* p = "abcdef";
	//printf("%p\n", p);
	//printf("%p\n", &p[0]);
	//printf("%p\n", &p);
	//printf("%p\n", &p[3]);

	printf("%d\n", strlen(p));		//6
	printf("%d\n", strlen(p + 1));	//5
	//printf("%d\n", strlen(*p));		//����
	//printf("%d\n", strlen(p[0]));		//����
	printf("%d\n", strlen(&p));		//&pȡ�����ַ�ָ��p�ĵ�ַ��ָ��p����ַ�'a'�ĵ�ַ,��С�˷�ʽ�洢�����������ַ����ĵ�ַ���������ֵ������<=3
	printf("%d\n", strlen(&p + 1));	//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5

	//printf("%d\n", sizeof(p));		//4or8
	//printf("%d\n", sizeof(p + 1));	//4or8
	//printf("%d\n", sizeof(*p));		//1
	//printf("%d\n", sizeof(p[0]));		//1
	//printf("%d\n", sizeof(&p));		//4or8
	//printf("%d\n", sizeof(&p + 1));	//4or8
	//printf("%d\n", sizeof(&p[0] + 1));//4or8

		/*=============================================================================================================================================*/
	/*
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));		//6
	printf("%d\n", strlen(arr + 0));	//6
	printf("%d\n", strlen(*arr));		//����
	//printf("%d\n", strlen(arr[1]));		//����
	printf("%d\n", strlen(&arr));		//���ֵ ->6
	printf("%d\n", strlen(&arr + 1));	//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//5
	//�����
	printf("%d\n", sizeof(arr));		//6
	printf("%d\n", sizeof(arr + 0));	//4or8
	printf("%d\n", sizeof(*arr));		//1
	printf("%d\n", sizeof(arr[1]));		//1
	printf("%d\n", sizeof(&arr));		//4or8
	printf("%d\n", sizeof(&arr + 1));	//4or8
	printf("%d\n", sizeof(&arr[0] + 1));//4or8
	*/
	/*=============================================================================================================================================*/

	//�����

	/*
	* char arr[] = {'a','b','c','d','e','f'};
	*
	* //�����
	printf("%d\n", strlen(arr));		//���ֵ
	printf("%d\n", strlen(arr + 0));	//���ֵ
	printf("%d\n", strlen(*arr));		//���ֵ
	printf("%d\n", strlen(arr[1]));		//����
	printf("%d\n", strlen(&arr));		//���ֵ
	printf("%d\n", strlen(&arr + 1));	//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ

	//�����
	printf("%d\n", sizeof(arr));		//6
	printf("%d\n", sizeof(arr + 0));	//4or8
	printf("%d\n", sizeof(*arr));		//1
	printf("%d\n", sizeof(arr[1]));		//1
	printf("%d\n", sizeof(&arr));		//4or8
	printf("%d\n", sizeof(&arr + 1));	//4or8
	printf("%d\n", sizeof(&arr[0] + 1));//4or8
	*/

	//���һ
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));		//16
	//printf("%d\n", sizeof(a + 0));	//4or8
	//printf("%d\n", sizeof(*a));		//4or8
	//printf("%d\n", sizeof(a + 1));	//4or8
	//printf("%d\n", sizeof(a[1]));	//4
	//printf("%d\n", sizeof(&a));		//4or8
	//printf("%d\n", sizeof(*&a));	//4
	//printf("%d\n", sizeof(&a + 1));	//4or8
	//printf("%d\n", sizeof(&a[0]));	//4or8
	//printf("%d\n", sizeof(&a[0] + 1));	//4or8

}