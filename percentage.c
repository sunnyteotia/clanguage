#include<stdio.h>
int main(){
    float a,b,c,d,e;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    float sum=a+b+c+d+e;
    float percentage=sum/5;
    printf("sum=%f\n",sum);
    printf("percentage=%f\n",percentage);
    return 0;
}