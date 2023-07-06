#include<stdio.h>
#include<math.h>
int main(){
    int original,temp,n,rem=0,rev=0;
for(int i=1;i<=100;i++){
    n=0,rev=0,rem=0;
    original=temp=i;
    while(temp){
        temp=temp/10;
        n++;
    }
    temp=original;
    while(temp){
        rem=temp%10;
        rev=rev+pow(rem,n);
        temp/=10;
    }
    if(rev==i){
        printf("%d,",rev);
    }
}
    return 0;
}