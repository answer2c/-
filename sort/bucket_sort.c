#include <stdio.h>
#include <string.h>

int main()
{
    //easy bucket sort 
    //简易桶排序
    int arr[] = {3,0,2,2,1};
    int max = 3; //预知待排数组的最大值
    int length = sizeof arr / sizeof(int);
    int bucket[max+1];
    memset(bucket,0, sizeof(int) * (max+1)); //预填0

    for (int i=0; i< length; i++) {
        //需要知道arr中的max
        bucket[arr[i]]++;
    }

    for (int j=0;j<=max;j++) {
        while (bucket[j] > 0){
            printf("%d",j);
            bucket[j]--;
        }
    }
    return 0;
}