#include<stdio.h>
int main(){

    float n;
    scanf("%f",&n);
    //printf("original number=%f",n);
    int rem,b;
    b=(int)n;
    while(b>0){
         rem=b%10;
         b=b/10;
    }
    printf("%d",rem);
    return 0;
}