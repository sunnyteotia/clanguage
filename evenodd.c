#include<stdio.h>
int main(){
    int n,sumeven=0,sumodd=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(i%2==0){
            sumeven+=i;
        }
        else{
            sumodd+=i;
        }
    }
    printf("%d %d",sumeven,sumodd);
    return 0;
}