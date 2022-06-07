//
//  main.c
//  selection 选择排序
//
//  Created by 王志杰 on 2022/6/7.
//

#include <stdio.h>

void selection_sort(int a[], int len)
{
    int i,j,temp;
 
    for (i = 0 ; i < len - 1 ; i++)
    {
        int min = i;                  // 记录最小值，第一个元素默认最小
        for (j = i + 1; j < len; j++)     // 访问未排序的元素
        {
            if (a[j] < a[min])    // 找到目前最小值
            {
                min = j;    // 记录最小值
            }
        }
        if(min != i)
        {
            temp=a[min];  // 交换两个变量
            a[min]=a[i];
            a[i]=temp;
        }
        /* swap(&a[min], &a[i]);  */   // 使用自定义函数交換
    }
}

int main() {
    int arr[] = { 1, 34, 3, 0 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    selection_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}
