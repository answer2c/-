#include <stdio.h>

//归并排序
void mergeSort(int *arr, int start, int end) {
    if (start >= end) {
        return ;
    }

    int mid = (start + end) / 2 + 1;
    mergeSort(arr, start, mid - 1);
    mergeSort(arr, mid, end);
 
    int newLength = end - start + 1;
    int temp[newLength];
    int i = start, j = mid;
    int t =0; 
    
    while (i<mid && j<=end) {
        if (arr[i] <= arr[j]) {
            temp[t++] = arr[i++];
        } else {
            temp[t++] = arr[j++];
        }
    }

    while (i<mid) {
        temp[t++] = arr[i++]; 
    }

    while (j<=end) {
        temp[t++] = arr[j++];
    }

    t=0;
    while (start<=end) {
        arr[start++] = temp[t++];
    }

}

int main () {
    int len = 5;
    int arr[] = {0,1,0,9,-1};
    mergeSort(arr, 0, len);

    for (int i=0; i<len;i++) {
        printf("%d " , arr[i]);
    }


    return 0;
}