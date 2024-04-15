#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    char b = a + 32;
    if(a>=65 && a<=96){
        printf("%c\n",a+32);
    }else{
        printf("%c\n",a-32);
    }
    return 0;
};