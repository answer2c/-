#include <stdio.h>

//插入排序
void insertSort(int arr[], int n) {
    for (int i =1;i<n;i++) {
        int key = arr[i];
        int j =i;
        while (arr[j-1] > key) {
            arr[j] = arr[j-1];
            j--;
            if (j==0) {
                break;
            }
        }

        arr[j] = key;
    }

}


int main () {
    int len = 5;
    int arr[] = {0,1,0,9,-1};
    insertSort(arr, len);

    for (int i=0; i<len;i++) {
        printf("%d " , arr[i]);
    }


    return 0;
}