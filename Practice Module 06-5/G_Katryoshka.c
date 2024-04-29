#include <stdio.h>

int main(){
    long long int a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    long long int withOneComponent = 0;
    long long int withTowEyesComponent = 0;


    
    if (a<=b && a<=c)
        {
            withOneComponent = a;

            b=b-a;
            c=c-a;
            a=0;
        }else if(b<=a && b<=c){
            withOneComponent = b;            
            a=a-b;
            c=c-b;
            b=0;
        }else{
            withOneComponent = c;            
            a=a-c;
            b=b-c;
            c=0;
     }

    if(a<=0 && c<=0){
        printf("%lld",withOneComponent);
    }else{
        long long int restEyes= a/2; 
        if(c-restEyes>0){            
             printf("%lld\n",withOneComponent+restEyes);
        }else{
            printf("d%lld\n",c);
        }   
       
    }       
    
    return 0;
};