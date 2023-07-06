#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int sum=0;
int rem=0;
while(n!=0){
    rem=n%10;
    sum+=rem;
    n/=10;
}
printf("%d",sum);
return 0;
}