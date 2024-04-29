#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int fristDigit = n/10;
    int lastDigit = n-(fristDigit*10);

    if(lastDigit==0){
        printf("NO");
    }else{
 if(fristDigit%lastDigit == 0 || lastDigit%fristDigit==0){
        printf("YES");
    }else{
        printf("NO");
    }
    }
    
   

    return 0;

};