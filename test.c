#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>



//int main(void)
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulArray + 3) += 3;
//	printf("%d,%d\n",*pulPtr,*(pulPtr+3));//6,12
//	return 0;
//}











//дһ�����������ַ���������
//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{ 
//	assert(str);
//	int len = strlen(str);
//	char* left = str;//��һ���ַ��ĵ�ַ
//	char* right = str + len - 1;//���һ���ַ��ĵ�ַ(����'\0')
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s",arr);//abcdef -- fedcba  // ����hello world ֻ�����olleh
//	gets(arr);
//	//������
//	reverse(arr);
//	printf("�������ַ�����%s",arr);
//	return 0;
//}











//������� ��Sn=a+aa+aaa+aaaa+aaaaa��ǰn��֮��,����a��һ������
//eg;2+22+222+2222+22222

//int main(void)
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d",&a,&n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}









//��ӡˮ�ɻ�������ӡ1-10000���е���������
//#include <math.h>
//int main(void)
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��λ��  nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//123/10 n++
//		//12/10 n++
//		//1/10
//		//2.����i��ÿһλ��n�η�֮�� sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i == sum
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}











//��ӡ����
//int main(void)
//{
//	int line = 0;
//	scanf("%d",&line);
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}












//����ˮ����:����ˮ,1ƿ��ˮ1Ԫ,2����ƿ���Ի�һƿ��ˮ,��20Ԫ,���Զ�����ˮ

//int main(void)
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d",&money);
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n",total);
//	return 0;
//}










//����һ������,ʵ��һ������.�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿��,����ż��λ������ĺ�벿��
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//�������ż��
//		while ((arr[left] % 2 == 1) && (left<right))
//		{
//			left++;
//		}
//		//���ұ�������
//		while (arr[right] % 2 == 0 && (left < right))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//}










//ʵ��һ������,���������ַ����е�k���ַ�    ����;ABCD����һ���ַ��õ�BCDA   ABCD���������ַ��õ�CDAB

#include <string.h>
#include <assert.h>
//������ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����һ���ַ� 
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//������ת��
//abcdef
//bafedc
//cdefab
//#include <string.h>
//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k < len);
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
//}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 10);
//	printf("%s\n", arr);
//	return 0;
//}










//дһ������,�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���,����� ����1,������� ����0



//#include <string.h>
//#include <assert.h>
//��ٷ�
//abcdef
//bcdefa
//cdefab
//defabc
//efabcd
//fabcde
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k < len);
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
//}
//
//int is_left_movt(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}


//����2
//abcdefabcdef
//#include <string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	//strcat �����Լ�׷���Լ�
//	//strncat
//	//strcat(str1,str1); // error
//	strncat(str1, str1, len1); //"abcdef" --> "abcdefabcdef"
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr - ���ִ���
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main(void)
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}











//���Ͼ���
//��һ�����־���,�����ÿ�д������ǵ�����,������ϵ����ǵ�����,���д�����������ľ����в���ĳ�����Ƿ����. 
//Ҫ��ʱ�临�Ӷ�С��O(N)
//int	FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


int	FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;//�����Ͳ���
	int y = 3;//�����Ͳ���
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±��ǣ�%d %d\n",x,y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}