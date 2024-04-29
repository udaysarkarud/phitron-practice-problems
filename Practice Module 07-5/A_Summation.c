#include <stdio.h>

int main(){
    int n,summation;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=0){
            summation+=arr[i];
        }
    }
    printf("%d",summation);
    
    return 0;
};