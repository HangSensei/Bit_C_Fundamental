#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��дһ�����򣬴��û������ж�ȡ10���������洢��һ�������С�Ȼ�󣬼��㲢�����Щ������ƽ��ֵ��
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


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
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
//���ÿ�����룬����á�*����ɵ�X��ͼ����

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



//�������룬һ��������3~20������ʾ�����������Ҳ��ʾ��������αߵġ�*����������
//���ÿ�����룬����á�*����ɵġ����ġ������Σ�ÿ����*��������һ���ո�

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



//���m��n�У�Ϊ����ת�ú�Ľ����ÿ����������һ���ո�
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

//һ�У�������������10���������ÿո�ָ���
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


//����
//���������������е����У����������кϲ�Ϊһ���������в������


//����������
//����������У�

//��һ�а�������������n, m���ÿո�ָ���n��ʾ�ڶ��е�һ���������������ֵĸ�����m��ʾ�����еڶ����������������ֵĸ�����

//�ڶ��а���n���������ÿո�ָ���

//�����а���m���������ÿո�ָ���

//���������
//���Ϊһ�У��������Ϊn + m���������У�������Ϊn���������кͳ���Ϊm�����������е�Ԫ�����½��������������кϲ���

//���룺5 6
//     1 3 7 9 22
//     2 8 10 17 33 44
//�����1 2 3 7 8 9 10 17 22 33 44

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