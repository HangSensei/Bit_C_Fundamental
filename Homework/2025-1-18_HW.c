#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
# include <math.h>

//��10 �����������ֵ
/*
int FindMax(int arr[], int num)
{
	int max = arr[0];
	for (int i = 0; i < num; i++)
	{
		if (max <= arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	int arr[] = { 12, 23, 99, 43, 56, 69, 100, 81, 97, 109 };
	int n = FindMax(arr,10);
	printf("%d", n);
	return 0;
}
*/

//дһ�����룺��ӡ100~200֮�������

//

int main() {
	int finished = 0; // 0 ��ʾ��ٻ�û����

	// do...while ѭ��
	do {
		printf("�����ȹ���һ�����...\n");

		// ���û������Ƿ����ѭ��
		printf("ʱ��ѭ���������𣿣�0=δ����, 1=��������");
		scanf("%d", &finished);
	} while (finished == 0); // ֻҪ finished Ϊ 0���ͼ���ѭ��

	printf("����ӭ������ѧ�ڣ�\n");
	return 0;
}