#include<stdio.h>
int main()
{
	int arr[2][3] = { 1,2,3,4,5,6 };
	//1�����迭
	//arr[0], arr[1]
	printf("%d, %d, %d\n", arr[0], *(arr+0), arr[0][0]);
	printf("%d, %d, %d\n", arr[1], *(arr+1), arr[1][0]);
	//�����Ϳ���� ���� ������
	//���� �����ŭ �����մϴ�.

	
	return 0;
}

/*
//2�����迭�� �ּ�Ȯ��
#include<stdio.h>


int main()
{
	int arr[2][3] = {1,2,3,4,5,6};
	//arr[0], arr[1]
	//arr[0][0], arr[0][1], arr[0][2]
	//arr[1][0], arr[1][1], arr[1][2]
	printf("arr       : %d     \n", arr);
	printf("arr[0]    : %d     \n", arr[0]);//1�����迭�̸�
	printf("arr[0][0] : %d , %d\n", arr[0][0], &arr[0][0]);
	printf("arr[0][1] : %d , %d\n", arr[0][1], &arr[0][1]);
	printf("arr[0][2] : %d , %d\n", arr[0][2], &arr[0][2]);
	printf("arr[1]    : %d     \n", arr[1]);//1�����迭�̸�
	printf("arr[1][0] : %d , %d\n", arr[1][0], &arr[1][0]);
	printf("arr[1][1] : %d , %d\n", arr[1][1], &arr[1][1]);
	printf("arr[1][2] : %d , %d\n", arr[1][2], &arr[1][2]);


	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{
	int arr[2][3];
	//6���� int�� ������ ������ش�
	//1�����迭�� ����
	//arr[0], arr[1]

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr[1]));

	//��
	int rows = sizeof(arr) / sizeof(arr[0]);
	int columns = sizeof(arr[0]) / sizeof(int);

	printf("%d�� %d��\n", rows, columns);

	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int num[3];
	int num1[] = {10,20,30};
	//����ǥ���� �ุ����, �ּ��� �������� �����ؾ��Ѵ�.
	int arr[][3] = { {10,20,30}, {40,50,60} };
	int arr2[][5] = { 1,2,3,4,5,6,7,8};
	int arr3[][2][3] = { 1,2,3,4,5,6,7,8,9,10 };
	return 0;
}
//*/

/*
#include<stdio.h>

int main()
{
	//�迭�� ����� ���� �ʱ�ȭ
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int arr2[3][3] = {
		{1},    //1, 0 , 0
		{4,5},  //4, 5 , 0
		{7,8,9} //7, 8 , 9
	};
	int arr3[3][3] = {
		1,4,5,  //
		7,8,9 
		        //0,0,0
	};
	//���������� ä��������.

	for (int i = 0; i < 3; i++) 
	{
		
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);//0:0 ,0:1, 0:2
		}
		printf("\n");//�ٹٲ�

	}
	puts("");//�ٹٲ�

	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr2[i][j]);//0:0 ,0:1, 0:2
		}
		printf("\n");

	}

	puts("");//�ٹٲ�

	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr3[i][j]);//0:0 ,0:1, 0:2
		}
		printf("\n");

	}
	return 0;
}
//*/


/*
//�������迭
#include<stdio.h>
int main()
{
	int arr[10];//1����
	int arr2[2][10];//2����
	int arr3[3][2][10];//3����

	//2�����迭
	//int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int a[3][4] = { 
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12} };
	//3�� 4�������� �迭
	//int4��¥�� 1�����迭 �� 3������
	//1�����迭�̸� a[0], a[1], a[2]
	//a[0][0], a[0][1], a[0][2], a[0][3]
	//a[1][0], a[1][1], a[1][2], a[1][3]
	//a[2][0], a[2][1], a[2][2], a[2][3]

	//a[i] == *(a+i)
	//a[0]==A �����Ѵٸ�
	//a[0][0] ==A[0]== *(A+0) == *((*(a+0))+0)

	printf("%d %d\n", a[0][0], *((*(a + 0)) + 0));
	printf("%d %d\n", a[0][1], *((*(a + 0)) + 1));
	printf("%d %d\n", a[0][2], *((*(a + 0)) + 2));
	printf("%d %d\n", a[0][3], *((*(a + 0)) + 3));
	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{
	int num=10;

	int* ptr = &num;
	int**dptr = &ptr;
	int***tptr= &dptr;

	printf("%d\n", num);
	printf("%d\n", *ptr);
	printf("%d\n", **dptr );
	printf("%d\n", ***tptr);

	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	char* str = "abcdef";
	char* arr[3]={"aaa", "bbb", "ccc"};

	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);

	char* ptr = arr[0];
	//���ڿ��迭�� ��������
	char** ptr2= arr;//arr== &arr[0]

	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	int arr[3] = { 10,20,30 };
	int* ptr = arr; arr== &arr[0]

	char str[] = {'a','a','a','a','\0'};
	//str[0], str[1], str[2], str[3], str[4]
	//str==&str[0]
	char* sptr=str;

	//����� ���ڿ� ����
	char* str2 = "abcde";
	//str2=='a'�� �ּҹ����� ����

	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof(str2));

	str[0] = 'b';
	puts(str);

	puts(str2);
	//str2[0] = 'b';//�Ұ���
	puts(str2);

	

	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	//������ �迭 : �������� ������ǥ��
	int n1 = 10, n2 = 20, n3 = 30;
	int ar[] = { 10,20,30 };
	int* arr[3] = {&n1, &n2, &n3};//int�������� �迭

	printf("%d\n", *arr[0]);
	printf("%d\n", *arr[1]);
	printf("%d\n", *arr[2]);

	return 0;
}
//*/

/*
#include<stdio.h>

int main()
{
	int n=10;
	scanf_s("%d", &n);
	//�Է��Լ��� �Է��Լ��ʿ��� main�Լ��� n�� �����͸� �����ؾ��ϹǷ�
	// n�� �ּҸ� �Ѱ��ָ� �����ϴ�.
	printf("%d", n);

	return 0;
}
//*/

/*
#include<stdio.h>

void disp(int num1, int num2);
void change(int* p1, int* p2);

int main()
{
	int num1=10;
	int num2=20;
	disp(num1, num2);
	change(&num1, &num2);
	disp(num1, num2);
	return 0;
}

void disp(int num1, int num2) 
{
	printf("num1 : %d , num2 : %d\n", num1, num2);
	puts("");
}

void change(int* p1, int* p2) 
{
	int temp = *p1;
	*p1 = *p2;
	 //* : �����͸������� �־�� = *:�����͸� �о��
	*p2 = temp;
}

//�����͸� �̿��ؼ� main�� ������ �����ϰ� �ִ�.
*/


/*
#include<stdio.h>
void disp(int ptr[]);

//���
// arr[i] == *(arr + i)
void display(int* ptr) {
	for (int i = 0; i < 3; i++) {
		printf("%d %d\n", *(ptr+i), ptr[i] );
	}
}

int main() {

	int arr[] = { 10,20,30 };

	display(arr);
	puts("");
	disp(arr);

	return 0;
}

//�Ķ���� int* ptr 
//�����ͺ����� �迭�� �����ͺ����� ���
//int ptr[] ����
void disp(int ptr[]) {
	for (int i = 0; i < 3; i++) {
		printf("%d\n", ptr[i]);
	}
}
//*/
/*
#include<stdio.h>
int main()
{
	int arr[4] = { 100,200,300,400 };

	int* ptr = arr;
	printf("%p %p\n", ptr, arr);

	printf("%d \n", *(ptr + 0));
	printf("%d \n", *(ptr + 1));
	printf("%d \n", *(ptr + 2));
	printf("%d \n", *(ptr + 3));

	return 0;
}
//*/

/*
#include<stdio.h>
int main()
{
	int arr[3] = { 10,20,30 };
	//arr[0], arr[1], arr[2] : int�� ���� 3���� ������ش�.
	int* ptr= &arr[0];
	printf("%d %d\n", arr[0], *ptr);
	ptr = &arr[1];
	printf("%d %d\n", arr[1], *ptr);
	ptr = &arr[2];
	printf("%d %d\n", arr[2], *ptr);

	puts("--------------");

	printf("%p %p\n", &arr[0], arr+0);
	printf("%p %p\n", &arr[1], arr+1);
	printf("%p %p\n", &arr[2], arr+2);
	//int���迭������ �����ʹ� 4����Ʈ�� �����Ѵ�.
	//int�������� �������ߴ��� �����Ͱ� 4�������Ѵ�.

	puts("--------------");
	for (int i = 0; i < 3; i++) {
		printf("%d %d %d\n", arr[i], *(&arr[i]), *(arr + i));
	}

	//���
	// arr[i] == *(arr + i)

	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int num;

	int* ptr = &num;
	printf("ptr size : %d\n", sizeof(ptr));
	printf("int* size : %d\n", sizeof(int*));

	double pi;//8byte

	double* ptr2=&pi;
	printf("double size : %d\n", sizeof(double));
	printf("ptr2 size : %d\n", sizeof(ptr2));
	printf("double* size : %d\n", sizeof(double*));

	//���� ��������ͺ����� ������� 4byte�Դϴ�.
	//�޸��ּ�ü�� int������� ���������..
	//�ּ�(������)�� �����ϴ� ������ 4byte�� �ʿ��ϴ�.

	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	int num = 10;

	int* ptr1 = &num;

	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;

	printf("num: %d\n", num);

	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	int num=10;

	//scanf_s("%d", &num);
	//printf("num : %d\n", num);

	//�����ͺ����� �����͸� ����
	int*ptr=&num;
	printf("%p\n", ptr);
	//������ ������ ���ؼ� ������ ����

	printf("num : %d, %d\n", num, *ptr);
	// *ptr : ptr�����ͺ����� �޸��ּҿ��� 4����Ʈ��ŭ �о��

	double pi=3.14;
	double* ptr2=&pi;

	//�����ͺ�����
	//������ ù��° �ּҹ��� & ���������� �� �����ִ�.

	return 0;
}
//*/

/*
//����ž��, �Ķ����

//void �Լ��̸�(�Ķ����){}
//void �Լ��̸�(void){}
//����Ÿ�� �Լ��̸�(�Ķ����){}
//����Ÿ�� �Լ��̸�(void){}

#include<stdio.h>
int main()
{
	//������ ������Ÿ���� ����
	int arr[4];//int������ 4�� ������ ������..
	//�迭�̸�[�ε�����ȣ] : �ε�����ȣ 0~
	//arr[0] , arr[1], arr[2], arr[3]
	//�迭�̸� : �迭�� ù��° �޸��ּҰ��� �����ϰ� �ִ�.
	//������ == �޸��ּҹ���..
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);
	printf("%p\n", &arr[3]);

	return 0;
}
*/