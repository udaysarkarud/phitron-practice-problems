#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int minNum =0;
    int minPos =0;
    int maxNum =0;
    int maxPos =0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]<=minNum){
            minNum = arr[i];
            minPos = i;
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=maxNum){
            maxNum = arr[i];
            maxPos = i;
        }
    }

    printf("%d %d\n", minNum,minPos);
    printf("%d %d\n", maxNum,maxNum);
    
    return 0;
};