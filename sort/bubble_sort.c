#include <stdio.h>
int bubble_sort(int *, int);

int main() {
    int arr[] = {1,2,4,7,0};
    bubble_sort(arr, 5);
    for(int m=0;m<5;m++) {
        printf("%d", arr[m]);
    }
    return 0;
}

int bubble_sort(int *arr, int length)
{
    int i,j;
    for (i=0; i < length; i++) {
        for (j=0;j < length-i-1;j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return 0;
}