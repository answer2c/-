#include <stdio.h>
int quick_sort(int *, int, int);

int main()
{
    int length;
    printf("输入数组长度:\n");
    scanf("%d", &length);
    
    int arr[length];
    printf("输入数组元素:\n");
    for (int i=0; i < length; i++) {
         scanf("%d", &arr[i]);
    }
    quick_sort(arr, 0, length - 1);
    for (int m = 0; m < length; m++) {
        printf("%d", arr[m]);
    }
    printf("\n");
    return 0;
}

/**
 * 快排
 **/
int quick_sort(int *arr, int start, int end)
{
    if (start >= end) {
        return 0;
    }

    int temp;
    int i = start;
    int j = end;
    int base = arr[start];
    while (i != j) {
        while (arr[j] >= base && i < j)
            j--;
        while (arr[i] <= base && i < j)
            i++;

        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    arr[start] = arr[i];
    arr[i] = base;

    quick_sort(arr, start, i-1);
    quick_sort(arr, i+1, end);
    return 0;
}
