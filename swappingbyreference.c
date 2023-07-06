//SWAPPING BY REFERENCE CALL
#include<stdio.h>
void swapping(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
int x=4,y=5;
printf("numbers before swapping are:%d,%d\n",x,y);
swapping(&x,&y);
printf("numbers after swapping are:%d,%d\n",x,y);
    return 0;
}