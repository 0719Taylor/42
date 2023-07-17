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











//写一个函数逆序字符串的内容
//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{ 
//	assert(str);
//	int len = strlen(str);
//	char* left = str;//第一个字符的地址
//	char* right = str + len - 1;//最后一个字符的地址(不是'\0')
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
//	//scanf("%s",arr);//abcdef -- fedcba  // 输入hello world 只能输出olleh
//	gets(arr);
//	//逆序函数
//	reverse(arr);
//	printf("逆序后的字符串：%s",arr);
//	return 0;
//}











//计算求和 求Sn=a+aa+aaa+aaaa+aaaaa的前n项之和,其中a是一个数字
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









//打印水仙花数（打印1-10000所有的自幂数）
//#include <math.h>
//int main(void)
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为水仙花数（自幂数）
//		//1.计算i的位数  n位数
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
//		//2.计算i的每一位的n次方之和 sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较i == sum
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}











//打印菱形
//int main(void)
//{
//	int line = 0;
//	scanf("%d",&line);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}












//喝汽水问题:喝汽水,1瓶汽水1元,2个空瓶可以换一瓶汽水,给20元,可以多少汽水

//int main(void)
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d",&money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n",total);
//	return 0;
//}










//输入一个数组,实现一个函数.来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分,所有偶数位于数组的后半部分
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
//		//从左边找偶数
//		while ((arr[left] % 2 == 1) && (left<right))
//		{
//			left++;
//		}
//		//从右边在奇数
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










//实现一个函数,可以左旋字符串中的k的字符    例如;ABCD左旋一个字符得到BCDA   ABCD左旋两个字符得到CDAB

#include <string.h>
#include <assert.h>
//暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋一个字符 
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//三步翻转法
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
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体
//}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 10);
//	printf("%s\n", arr);
//	return 0;
//}










//写一个函数,判断一个字符串是否为另外一个字符串旋转之后的字符串,如果是 返回1,如果不是 返回0



//#include <string.h>
//#include <assert.h>
//穷举法
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
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体
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


//方法2
//abcdefabcdef
//#include <string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1字符串中追加一个str1字符串
//	//strcat 不能自己追加自己
//	//strncat
//	//strcat(str1,str1); // error
//	strncat(str1, str1, len1); //"abcdef" --> "abcdefabcdef"
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr - 找字串的
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











//杨氏矩阵
//有一个数字矩阵,矩阵的每行从左到右是递增的,矩阵从上到下是递增的,请编写程序在这样的矩阵中查找某个数是否存在. 
//要求：时间复杂度小于O(N)
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
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
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
	int x = 3;//返回型参数
	int y = 3;//返回型参数
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是：%d %d\n",x,y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}