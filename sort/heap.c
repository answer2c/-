#include <stdio.h>
#include <math.h>

//堆数据结构  是一个完全二叉树  可以用数组来表示一个堆 某个节点下标为i 则其父节点 = (i-1) /2; 子节点为 2i+1 和 2i+2
//对某个节点进行堆操作 
void heapify (int arr[], int n, int i) {
    if (i>=n) {
        return ;
    }
    int max = i;
    int c1 = 2*i +1;
    int c2 = 2*i + 2;
    if (c1 < n && arr[c1] > arr[max]) {
        max = c1;
    }

    if (c2 < n && arr[c2] > arr[max]) {
        max = c2;
    }

    if (max != i) {
        int temp = arr[max];
        arr[max] = arr[i];
        arr[i] = temp;
        heapify(arr, n, max);
    }
}

//根据一个数组 建成一个堆 思想就是从最后一个叶子节点的父节点开始进行heap
void heap(int arr[], int n) {
    int last = n-1;
    int parent = (last-1) / 2;
    while (parent>=0) {
        heapify(arr,n,parent);
        parent --;
    }
}

void swap(int arr[], int m, int n) {
    int temp = arr[m];
    arr[m] = arr[n];
    arr[n] = temp;
}

void heapSort(int arr[], int n) {
    heap(arr, n);
    int last = n - 1;
    while (last > 0) {
        int temp = arr[0];
        arr[0] = arr[last];
        arr[last] = temp;
        heapify(arr, last, 0);
        last --;
    }

}


int main() {

    int arr[] = {5,4,3,10,1,2};
    int len = 6;
    heapSort(arr, len);

    for (int i=0; i<len;i++) {
        printf("%d " , arr[i]);
    }
}