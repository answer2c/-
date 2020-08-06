#include <stdio.h>
int bubble_sort(int *, int);

int main() {
    int length;
    printf("输入数组长度:\n");
    scanf("%d", &length);
    int arr[length];
    printf("输入数组元素:\n");
    for (int i=0; i < length; i++) {
         scanf("%d", &arr[i]);
    }
    bubble_sort(arr, length);
    return 0;
}

int bubble_sort(int *arr, int length)
{
    int i,j;
    //往后往前
    for (i=1; i < length; i++) {
        for (j=0; j < length-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int m=0; m < length; m++) {
        printf("%d ", arr[m]);
    }
    
    printf("\n");
    //从前往后
    for (i=1;i<length;i++) {
        for (j=length-1;j>i-1;j--) {
            if (arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    for(int m=0; m < length; m++) {
        printf("%d ", arr[m]);
    }
    printf("\n");

    return 0;
}