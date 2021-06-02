#include <stdio.h>


int getMaxPos(int arr[], int n) {
    int pos = 0;
    int max = arr[0];
    for (int i=1; i<n;i++) {
        if (arr[i] > max) {
            max = arr[i];
            pos = i;
        }
    }
    return pos;
}

//选择排序
void selectSort(int arr[], int n) {
    if (n<=1) {
        return ;
    }
    while (n>0) {
        int pos = getMaxPos(arr, n);
        int temp = arr[n - 1];
        arr[n-1] = arr[pos];
        arr[pos] = temp;
        n--;
    }
}

int main() {
    int len = 5;
    int arr[] = {0,1,0,9,-1};
    selectSort(arr, len);

    for (int i=0; i<len;i++) {
        printf("%d " , arr[i]);
    }

    printf("\n ");

    return 0;
}