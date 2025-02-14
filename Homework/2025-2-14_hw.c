#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//输出一个字符串，表示将输入字符串s 翻转后的结果(先反转再输出)。
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

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
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

//模拟实现库函数strlen
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

//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

// i循环控制整体旋转次数，例如ABCD得到BCDA需要先拿出A，BCD整体左移一位，再补上A（BCDA），这是整体旋转一次。同理CDAB由BCDA -- CDAB得到，这是整体旋转第二次。
//j循环控制左移次数，例如 str[0] = str[1], str[1] = str[2], str[2] = str[3],每一次完成左移后j需要归0， len - 1 可以避免非法访问
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

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
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

//指针替换版本
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

//实现一个对整形数组的冒泡排序
void Bubble_sort(int* arr, int len)
{
    int i = 0;
    for (int i = 0; i < len - 1; i++) // how many times (len - 1)
    {
        //one time sort
        int flag = 1;//假设待排序的数据已经有序了
        int j = 0;
        for ( j = 0; j < len - 1 - i; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int tmp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = tmp;
                flag = 0;//发生了交换，无序
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