#include<stdio.h>
int main()
{
	int arr[2][3] = { 1,2,3,4,5,6 };
	//1차원배열
	//arr[0], arr[1]
	printf("%d, %d, %d\n", arr[0], *(arr+0), arr[0][0]);
	printf("%d, %d, %d\n", arr[1], *(arr+1), arr[1][0]);
	//포인터연산시 행의 연산은
	//열의 사이즈만큼 증가합니다.

	
	return 0;
}

/*
//2차원배열의 주소확인
#include<stdio.h>


int main()
{
	int arr[2][3] = {1,2,3,4,5,6};
	//arr[0], arr[1]
	//arr[0][0], arr[0][1], arr[0][2]
	//arr[1][0], arr[1][1], arr[1][2]
	printf("arr       : %d     \n", arr);
	printf("arr[0]    : %d     \n", arr[0]);//1차원배열이름
	printf("arr[0][0] : %d , %d\n", arr[0][0], &arr[0][0]);
	printf("arr[0][1] : %d , %d\n", arr[0][1], &arr[0][1]);
	printf("arr[0][2] : %d , %d\n", arr[0][2], &arr[0][2]);
	printf("arr[1]    : %d     \n", arr[1]);//1차원배열이름
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
	//6개의 int형 변수를 만들어준다
	//1차원배열의 집합
	//arr[0], arr[1]

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr[1]));

	//행
	int rows = sizeof(arr) / sizeof(arr[0]);
	int columns = sizeof(arr[0]) / sizeof(int);

	printf("%d행 %d열\n", rows, columns);

	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int num[3];
	int num1[] = {10,20,30};
	//생략표현은 행만가능, 최소한 열개수는 지정해야한다.
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
	//배열의 선언과 동시 초기화
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
	//순차적으로 채워나간다.

	for (int i = 0; i < 3; i++) 
	{
		
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);//0:0 ,0:1, 0:2
		}
		printf("\n");//줄바꿈

	}
	puts("");//줄바꿈

	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr2[i][j]);//0:0 ,0:1, 0:2
		}
		printf("\n");

	}

	puts("");//줄바꿈

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
//다차원배열
#include<stdio.h>
int main()
{
	int arr[10];//1차원
	int arr2[2][10];//2차원
	int arr3[3][2][10];//3차원

	//2차원배열
	//int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int a[3][4] = { 
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12} };
	//3행 4열구조의 배열
	//int4개짜리 1차원배열 이 3개묶음
	//1차원배열이름 a[0], a[1], a[2]
	//a[0][0], a[0][1], a[0][2], a[0][3]
	//a[1][0], a[1][1], a[1][2], a[1][3]
	//a[2][0], a[2][1], a[2][2], a[2][3]

	//a[i] == *(a+i)
	//a[0]==A 가정한다면
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
	//문자열배열의 포인터형
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

	//상수형 문자열 변수
	char* str2 = "abcde";
	//str2=='a'의 주소번지가 저장

	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof(str2));

	str[0] = 'b';
	puts(str);

	puts(str2);
	//str2[0] = 'b';//불가능
	puts(str2);

	

	return 0;
}
//*/
/*
#include<stdio.h>
int main()
{
	//포인터 배열 : 포인터의 집합의표현
	int n1 = 10, n2 = 20, n3 = 30;
	int ar[] = { 10,20,30 };
	int* arr[3] = {&n1, &n2, &n3};//int형포인터 배열

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
	//입력함수는 입력함수쪽에서 main함수의 n에 데이터를 저장해야하므로
	// n의 주소를 넘겨주면 가능하다.
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
	 //* : 데이터를공간에 넣어라 = *:데이터를 읽어라
	*p2 = temp;
}

//포인터를 이용해서 main의 변수를 조작하고 있다.
*/


/*
#include<stdio.h>
void disp(int ptr[]);

//결론
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

//파라미터 int* ptr 
//포인터변수가 배열의 포인터변수인 경우
//int ptr[] 가능
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
	//arr[0], arr[1], arr[2] : int형 변수 3개를 만들어준다.
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
	//int형배열변수의 포인터는 4바이트씩 증가한다.
	//int형포인터 연산을했더니 포인터가 4씩증가한다.

	puts("--------------");
	for (int i = 0; i < 3; i++) {
		printf("%d %d %d\n", arr[i], *(&arr[i]), *(arr + i));
	}

	//결론
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

	//현재 모든포인터변수의 사이즈는 4byte입니다.
	//메모리주소체계 int사이즈로 만들어졌다..
	//주소(포인터)를 저장하는 공간은 4byte만 필요하다.

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

	//포인터변수에 포인터를 저장
	int*ptr=&num;
	printf("%p\n", ptr);
	//포인터 변수를 통해서 데이터 접근

	printf("num : %d, %d\n", num, *ptr);
	// *ptr : ptr포인터변수의 메모리주소에서 4바이트만큼 읽어라

	double pi=3.14;
	double* ptr2=&pi;

	//포인터변수는
	//변수의 첫번째 주소번지 & 사이즈정보 를 갖고있다.

	return 0;
}
//*/

/*
//리턴탑입, 파라미터

//void 함수이름(파라미터){}
//void 함수이름(void){}
//리턴타입 함수이름(파라미터){}
//리턴타입 함수이름(void){}

#include<stdio.h>
int main()
{
	//동일한 데이터타입의 집합
	int arr[4];//int형변수 4개 공간을 만들어라..
	//배열이름[인덱스번호] : 인덱스번호 0~
	//arr[0] , arr[1], arr[2], arr[3]
	//배열이름 : 배열의 첫번째 메모리주소값을 저장하고 있다.
	//포인터 == 메모리주소번지..
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);
	printf("%p\n", &arr[3]);

	return 0;
}
*/