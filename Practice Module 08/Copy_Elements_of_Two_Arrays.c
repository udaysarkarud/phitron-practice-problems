#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr1[n],arr2[m],arr3[n+m];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d",&arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr3[i]=arr1[i];
    }
    
    int tmp =0;

    for (int i = n; i < n+m; i++)
    {   
        if(tmp < m){
        arr3[i]=arr2[tmp];
        tmp++;
        }
        
    }

    for (int i = 0; i < n+m; i++)
    {
        printf("%d ",arr3[i]);
    }
    

    return 0;
};