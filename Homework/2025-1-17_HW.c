#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����
//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//����������
//��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0<a,b,c<1000)����Ϊ�����ε������ߣ��ÿո�ָ���
//������������ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!��
//�����������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����
//ʾ��1
//���룺
//2 3 2
//3 3 3
//�����
//Isosceles triangle!
//Equilateral triangle!

/*
#include <stdio.h>

int main() {
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF) { // ע�� while ������ case
		// 64 λ������� printf("%lld") to
		if ((a + b > c) && (a + c > b) && (b + c > a)) {

			if (a == b && b == c && a == c)
			{
				printf("Equilateral triangle!\n");
			}
			else if (a == b || a == c|| b == c)
			{
				printf("Isosceles triangle!\n");
			}
			else {
				printf("Ordinary triangle!\n");
			}

		}
		else {
			printf("Not a triangle!\n");
		}
	}
	return 0;
}
*/

//�˷��ھ���
//����Ļ�����9 * 9�˷��ھ���
/*
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ",j,i,i * j);
		}
	printf("\n");
	}

	return 0;
}
*/


//�������
//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����

/*
int main()
{
	int flag = 1;
	double sum = 0.0;
	for (int i = 1; i <= 100; i++)
	{
		sum += 1.0 / i * flag;
		flag *= -1;
	}
	printf("%lf\n", sum);
	return 0;
}
*/



//��9�ĸ���
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
/*
int main()
{
	int count = 0;
	for ( int i = 1; i <= 100; i++)
	{
		if (i / 10 == 9)
		{
			count++;
		}
		if (i % 10 == 9)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
*/


//��ӡ1000�굽2000��֮�������
/*
int main()
{
	for (int i = 1000; i <= 2000; i += 4)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
*/
//�������������������������������
//���磺
//���룺112 264
//�����8
//
int main()
{
	int a = 0;
	int b = 0;
	int temp = 0;
	scanf("%d %d", &a, &b);

	while (temp = a % b)
	{
		a = b;
		b = temp;
	}
	printf("%d\n", b);

	return 0;
}


