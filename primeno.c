#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(n<=1){
        flag=0;
    }
    if(flag==0){
        printf("number is not prime");
    }
    else{
        printf("number is prime");
    }
    return 0;
}