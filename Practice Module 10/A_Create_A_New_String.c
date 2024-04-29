#include <stdio.h>
#include<string.h>
int main(){
    char s[1001],t[1001];
    scanf("%s\n",s);
    scanf("%s\n",t);

    int s_size = strlen(s);
    int t_size = strlen(t);

    printf("%d %d\n%s %s",s_size,t_size,s,t);


    return 0;
};