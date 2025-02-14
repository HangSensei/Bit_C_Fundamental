#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//���һ���ַ�������ʾ�������ַ���s ��ת��Ľ��(�ȷ�ת�����)��
/*
void Reverse(char* str)
{
    int len = strlen(str);
    char* left = str;
    char* right = str + len - 1;
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }

}

int main()
{
    char str[10000] = { 0 };
    while (gets(str))
    {
        Reverse(str);
        printf("%s ", str);
    }

    return 0;
}
*/

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
/*
void Print(int* arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
}

int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    Print(arr,len);
    return 0;
}
*/

//ģ��ʵ�ֿ⺯��strlen
/*
size_t My_strlen(char* string)
{
    int count = 0;
    while (*string)
    {
        count++;
        string++;
    }
    return count;
}
int main()
{
    char test_string[] = "idiot";
    size_t r = My_strlen(test_string);
    printf("strlen = %zd", r);
    return 0;
}
*/

//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

// iѭ������������ת����������ABCD�õ�BCDA��Ҫ���ó�A��BCD��������һλ���ٲ���A��BCDA��������������תһ�Ρ�ͬ��CDAB��BCDA -- CDAB�õ�������������ת�ڶ��Ρ�
//jѭ���������ƴ��������� str[0] = str[1], str[1] = str[2], str[2] = str[3],ÿһ��������ƺ�j��Ҫ��0�� len - 1 ���Ա���Ƿ�����
/*
void LeftRound(char* str, int k)
{
    int len = strlen(str);
    int time = k % len; // processed rotate times
    //int i = 0; // current rotate times init
    int j = 0; // index
    for (int i = 0; i < time; i++)
    {
        char tmp = str[0];
        for (j = 0; j < len - 1; j++)
        {
            str[j] = str[j + 1];
        }
        str[j] = tmp;
    }
}

int main()
{
    char str[] = "ABCD";
    int k = 2;// desired rotate times
    LeftRound(str, k);
    printf("%s\n", str);
    return 0;
}
*/

//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
/*
void Arrange(int arr[], int len)
{
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        while ((left < right) && (arr[left] % 2 != 0))
        {
            left++;
        }
        while ((left < right) && (arr[right] % 2 == 0))
        {
            right--;
        }
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
    }
}
void Print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int len = sizeof(arr) / sizeof(arr[0]);
    Arrange(arr, len);
    Print(arr, len);
    return 0;
}
*/

//ָ���滻�汾
/*
void Arrange(int* arr, int len)
{
    int* left = arr;
    int* right = arr + len - 1;
    while (left < right)
    {
        while ((left < right) && (*left % 2 != 0))
        {
            left++;
        }
        while ((left < right) && (*right % 2 == 0))
        {
            right--;
        }
        int tmp = *left;
        *left = *right;
        *right = tmp;
    }
}
void Print(int* arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int len = sizeof(arr) / sizeof(arr[0]);
    Arrange(arr, len);
    Print(arr, len);
    return 0;
}
*/

//ʵ��һ�������������ð������
void Bubble_sort(int* arr, int len)
{
    int i = 0;
    for (int i = 0; i < len - 1; i++) // how many times (len - 1)
    {
        //one time sort
        int flag = 1;//���������������Ѿ�������
        int j = 0;
        for ( j = 0; j < len - 1 - i; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int tmp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = tmp;
                flag = 0;//�����˽���������
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
}

void PrintArr(int* arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int len = sizeof(arr) / sizeof(arr[0]);
    PrintArr(arr, len);
    Bubble_sort(arr, len);
    PrintArr(arr, len);
    return 0;
}