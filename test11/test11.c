#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

/**

总结：
		数组名的意义：
		1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
		2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
		3. 除此之外所有的数组名都表示首元素的地址。*/
int main() {
	
	/*
	//二维数组
	//二位数组数组名，*a是的首元素a[0]（第一行的地址）,*a[0]是a[0][0]的地址（第一行第一个的地址）
	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	printf("%d\n", sizeof(a));			//48
	printf("%d\n", sizeof(a[0][0]));		//4
	printf("%d\n", sizeof(a[0]));			//4or8		解：16：a[0]是二维数组第一行首元素，未进行运算，这里就是第一行的地址，计算整行的长度  
	printf("%d\n", sizeof(a[0] + 1));		//a[0][1]的地址；4or8 
	printf("%d\n", sizeof(*(a[0] + 1)));	//4
	printf("%d\n", sizeof(a + 1));		//a是二维数组的数组名，没有进行&a或者单独sizeof(a)，所以a是二维数组首元素的地址，可以把二维数组看作长度为3的一维数组，每个元素就是一行，所以a+1就是第二行元素地址
	printf("%d\n", sizeof(*(a + 1)));		//4			解：16：由上可得a+1是第二行首元素的地址，对其解引用获得第二行的地址，放进sizeof中就相当于单独放入一个一维数组的数组名，计算这个一维数组的长度
	printf("%d\n", sizeof(&a[0] + 1));	//取出第一个元素（第一行）的数组名a[0]的地址+1后得到第二行元素a[1]的地址 4or8
	printf("%d\n", sizeof(*(&a[0] + 1)));	//4？？？	解：16：由上可得
	printf("%d\n", sizeof(*a));			//4or8		16
	printf("%d\n", sizeof(a[3]));			//16

	*/
	/*=============================================================================================================================================*/
	
	/*
	* 
	//字符串的sizeof()与strlen()
	 char* p = "abcdef";
	//printf("%p\n", p);
	//printf("%p\n", &p[0]);
	//printf("%p\n", &p);
	//printf("%p\n", &p[3]);

	printf("%d\n", strlen(p));		//6
	printf("%d\n", strlen(p + 1));	//5
	//printf("%d\n", strlen(*p));		//报错
	//printf("%d\n", strlen(p[0]));		//报错
	printf("%d\n", strlen(&p));		//&p取的是字符指针p的地址，指针p存的字符'a'的地址,以小端方式存储，而并非是字符串的地址，可能随机值，可能<=3
	printf("%d\n", strlen(&p + 1));	//随机值
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
	printf("%d\n", strlen(*arr));		//报错
	//printf("%d\n", strlen(arr[1]));		//报错
	printf("%d\n", strlen(&arr));		//随机值 ->6
	printf("%d\n", strlen(&arr + 1));	//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5
	//情况四
	printf("%d\n", sizeof(arr));		//6
	printf("%d\n", sizeof(arr + 0));	//4or8
	printf("%d\n", sizeof(*arr));		//1
	printf("%d\n", sizeof(arr[1]));		//1
	printf("%d\n", sizeof(&arr));		//4or8
	printf("%d\n", sizeof(&arr + 1));	//4or8
	printf("%d\n", sizeof(&arr[0] + 1));//4or8
	*/
	/*=============================================================================================================================================*/

	//情况五

	/*
	* char arr[] = {'a','b','c','d','e','f'};
	*
	* //情况三
	printf("%d\n", strlen(arr));		//随机值
	printf("%d\n", strlen(arr + 0));	//随机值
	printf("%d\n", strlen(*arr));		//随机值
	printf("%d\n", strlen(arr[1]));		//报错
	printf("%d\n", strlen(&arr));		//随机值
	printf("%d\n", strlen(&arr + 1));	//随机值
	printf("%d\n", strlen(&arr[0] + 1));//随机值

	//情况二
	printf("%d\n", sizeof(arr));		//6
	printf("%d\n", sizeof(arr + 0));	//4or8
	printf("%d\n", sizeof(*arr));		//1
	printf("%d\n", sizeof(arr[1]));		//1
	printf("%d\n", sizeof(&arr));		//4or8
	printf("%d\n", sizeof(&arr + 1));	//4or8
	printf("%d\n", sizeof(&arr[0] + 1));//4or8
	*/

	//情况一
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