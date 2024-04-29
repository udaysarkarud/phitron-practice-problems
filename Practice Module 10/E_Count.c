#include <stdio.h>
#include <string.h>
int main(){
    char s[1000001];
    scanf("%s",s);
    int sz = strlen(s);
    int total = 0;
    for (int i = 0; i < sz; i++)
    {   
        total += (int)s[i]-48;
       
    }
   printf("%d",total);
    
    return 0;
};