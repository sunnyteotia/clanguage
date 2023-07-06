/*#include<stdio.h>
int main(){
    int n; 
    int factorial=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        factorial*=i;

    }
    printf("%d",factorial);
}*/
//factorial using recursion
#include<stdio.h>
int factorial(int n){
if(n==0 ||n==1){
    return 1;
}
return n*factorial(n-1);
}
int main(){
int n;
scanf("%d",&n);
printf("factorial of %d is =%d\n ",n,factorial(n));
    return 0;
}