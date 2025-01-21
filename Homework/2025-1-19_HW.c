#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//编写一个程序，从用户输入中读取10个整数并存储在一个数组中。然后，计算并输出这些整数的平均值。
/*
int main()
{
	int arr[10] = { 0 };
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	double avg = (double)sum / (sizeof(arr) / sizeof(arr[0]));

	printf("The avg num of this arr is %lf",avg);

	return 0;
}
*/


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
/*
int main() {

	int arr1[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[8] = { 9, 10, 11, 12, 13, 14, 15, 16 };
	printf("old arr1 = 1 2 3 4 5 6 7 8\nold arr2 = 9 10 11 12 13 14 15 16\n");

	for (int i = 0; i < 8; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	printf("new arr1 = ");

	for (int i = 0; i < 8; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	printf("new arr2 = ");

	for (int i = 0; i < 8; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
*/

//5
//针对每行输入，输出用“*”组成的X形图案。

/*
int main() {
	int a = 0;
	while (scanf("%d", &a) != EOF) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				if (i == j || (a - 1) == i + j) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
*/



//多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“*”的数量。
//针对每行输入，输出用“*”组成的“空心”正方形，每个“*”后面有一个空格。

/*
int main() {
	int a = 0;
	while (scanf("%d", &a) != EOF) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				if (i == 0 || j == 0 || i == a - 1 || j == a - 1) {
					printf("* ");
				}
				else {
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
*/

//(0,0)(0,1)(0,2)(0,3)   i == 0 ; j == 0 ; i == 3 ; j == 3
//(1,0)(   )(   )(1,3)
//(2,0)(   )(   )(2,3)
//(3,0)(3,1)(3,2)(3,3)



//输出m行n列，为矩阵转置后的结果。每个数后面有一个空格。
/*


int main() {
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);// 2 * 3 matrix 2 line 3 colum1 2 3
//                                                       4 5 6
	int arr[n][m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	for (int i = 0; i < m; i++) // m = 3, 3 line , (0,0) (1,0) (0,1) (1,1) (0,2) (1,2)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}

*/

//一行，逆序输出输入的10个整数，用空格分隔。
/*
int main()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i = 9; i >= 0; i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

*/


//描述
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。


//输入描述：
//输入包含三行，

//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。

//第二行包含n个整数，用空格分隔。

//第三行包含m个整数，用空格分隔。

//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。

//输入：5 6
//     1 3 7 9 22
//     2 8 10 17 33 44
//输出：1 2 3 7 8 9 10 17 22 33 44

/*
int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	int arr1[1000] = {0};
	int arr2[1000] = {0};
	for (int i = 0; i < n; i++) {
		scanf("%d ",&arr1[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d ",&arr2[i]);
	}
	int i = 0;
	int j = 0;
	while (i < n && j < m) {
		if (arr1[i] < arr2[j]) {
			printf("%d ",arr1[i]);
			i++;
		}
		else {
			printf("%d ",arr2[j]);
			j++;
		}
	}
	while (i < n) {
		printf("%d ",arr1[i]);
		i++;
	}
	while (j < m) {
		printf("%d ",arr2[j]);
		j++;
	}
	return 0;
}

*/