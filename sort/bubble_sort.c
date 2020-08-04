#include <stdio.h>
int bubble_sort(int *, int);

int main() {
    int arr[] = {1,2,4,7,9,0,9};
    bubble_sort(arr, 7);
    return 0;
}

int bubble_sort(int *arr, int length)
{
    int i,j;
    //由低到高
    for (i=0; i < length; i++) {
        for (j=0; j < length-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int m=0; m < length; m++) {
        printf("%d", arr[m]);
    }
    
    printf("\n");
    //由高到低
    for (i=0; i< length; i++) {
        for (j=0; j<length-1; j++) {
            if (arr[j+1] > arr[j]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int m=0; m < length; m++) {
        printf("%d", arr[m]);
    }

    return 0;
}