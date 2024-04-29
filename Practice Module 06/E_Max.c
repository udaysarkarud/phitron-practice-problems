#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int maxNumber = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d",&num);
        if(num>=maxNumber){
            maxNumber = num;
        }
    }

    printf("%d",maxNumber);
    
    return 0;
};