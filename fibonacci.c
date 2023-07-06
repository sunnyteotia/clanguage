//fibonacci using recursion
#include<stdio.h>
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<=n;i++){
    printf("%d",fibonacci(i));
    printf(",");
}
    return 0;
}
/*#include<stdio.h>
int main(){
int n,a=0,b=1;
scanf("%d",&n);
int sum=a+b;
printf("%d %d",a,",",b);
for(int i=3;i<=n;i++){
        printf(",%d",sum);
        a=b;
        b=sum;
        sum=a+b;
}
return 0;
}*/