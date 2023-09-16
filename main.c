#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////malloc、free
//#include<stdlib.h>
//int main()
//{
//	//在栈区开辟内存
//	int arr[10] = { 0 };
//	//在堆区开辟内存
//	int* p = (int*)malloc(10 * sizeof(int));
//	//int* p = (int*)malloc(1000000000000000 * sizeof(int));
//	//判断
//	if (p == NULL)
//	{
//		perror("main");//""不能缺
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//			/*arr[i] = i;
//			printf("%d ", arr[i]);*/
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
 
////calloc
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//			{
//				perror("main");//""不能缺
//			}
//			else
//			{
//				int i = 0;
//				for ( i = 0; i < 10; i++)
//				{
//					*(p + i) = i;
//					printf("%d ", *(p + i));
//					/*arr[i] = i;
//					printf("%d ", arr[i]);*/
//				}
//			}
//			free(p);
//			p = NULL;
//	return 0;
//}

////realloc
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");//""不能缺
//		//return 1;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 5;
//		}
//	}
//
//	int* ptr = (int*)realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdlib.h>
//#include<string.h>
//void getmemory(char** p)
//{
//	*p = (char*)malloc(100);
//	if (*p == NULL)
//	{
//		perror("getmemory");
//	}
//}
//void test()
//{
//	char* str = NULL;
//	getmemory(&str);
//	strcpy(str,"hello world");
//	printf(str);
//	free(str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//char* getmemory()
//{
//	char(*p)[] = "hello world";
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str = getmemory();
//	printf("%s",str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<stdlib.h>
//#include<string.h>
//char* getmemory(char** p,int num)
//{
//	*p = (char*)malloc(num);
//}
//void test()
//{
//	char* str = NULL;
//	getmemory(&str,100);
//	strcpy(str, "hello");
//	printf("%s", str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<stdlib.h>
//#include<string.h>
//void test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL) 
//	{
//		strcpy(str, "world");
//		printf("%s", str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//int* fi()
//{
//	int x = 10;
//	return (&x);
//}
//int main()
//{
//	fi();
//	return 0;
//}

int* fi()
{
	int* x = (int*)malloc(sizeof(int));
	*x = 10;
	return x;
}
int main()
{
	int* ptr = fi();
	// 使用ptr
	free(ptr);  // 使用完毕后记得释放内存
	return 0;
}
