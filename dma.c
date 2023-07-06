/*#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
//we do type casting because ,malloc returns void type pointer
ptr=(int *)malloc(5*sizeof(int));
ptr[0]=1;
ptr[1]=2;
ptr[2]=1;
ptr[3]=1;
ptr[4]=1;
for(int i=0;i<5;i++){
    printf("%d",ptr[i]);
}
    return 0;
}*/
//wap to allocate memory to store 5 prices
/*#include<stdio.h>
#include<stdlib.h>
int main(){
float *ptr;
//we do type casting because ,malloc returns void type pointer
ptr=(float *)malloc(5*sizeof(float));
ptr[0]=1;
ptr[1]=2;
ptr[2]=3;
ptr[3]=5;
ptr[4]=1;
for(int i=0;i<5;i++){
    printf("%f\n",ptr[i]);
}
    return 0;
}*/
//calloc function
/*#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
//calloc function initializes each value 0
ptr=(int *)calloc(5,sizeof(int));
for(int i=0;i<5;i++){
    printf("%d\n",ptr[i]);
}
    return 0;
}*/
//wap to allocate memory of size n,where n is entered by the user
/*#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
int n;
scanf("%d",&n);
//calloc function initializes each value 0
ptr=(int *)calloc(n,sizeof(int));
for(int i=0;i<n;i++){
    printf("%d\n",ptr[i]);
}
//uses of free function
free(ptr);
ptr=(int *)calloc(2,sizeof(int));
for(int i=0;i<2;i++){
    printf("%d\n",ptr[i]);
}
    return 0;
}*/
// realloc syntax->ptr=realloc(ptr,new size);
//allocate memory for 5 numbers .then dynamically increase it to 8 numbers
/*#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
//calloc function initializes each value 0
ptr=(int *)calloc(5,sizeof(int));
printf("enter 5 numbers =\n");
for(int i=0;i<5;i++){
    scanf("%d",&ptr[i]);
}
ptr=realloc(ptr,8);
//again input
printf("enter 8 numbers =\n");
for(int i=0;i<8;i++){
    scanf("%d",&ptr[i]);
}
//print
for(int i=0;i<8;i++){
    printf("number %d is %d\n",i,ptr[i]);
}
return 0;
}*/
//allocate memory to store first 5 odd numbers and then reallocate it store first 6 even numbers
/*#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
ptr=(int*)calloc(5,sizeof(int));
ptr[0]=1;
ptr[1]=2;
ptr[2]=3;
ptr[3]=4;
ptr[4]=5;
for(int i=0;i<5;i++){
    printf("%d\n",ptr[i]);
}
ptr=realloc(ptr,6);
ptr[0]=2;
ptr[1]=4;
ptr[2]=6;
ptr[3]=8;
ptr[4]=10;
ptr[5]=12;
for(int i=0;i<6;i++){
    printf("%d\n",ptr[i]);
}
    return 0;
}*/
//wap to take input from user and find sum of all  elements by allocating memory dynamically
#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,sum=0,n;
printf("enter no. of elements=\n");
scanf("%d",&n);
p=(int *)calloc(n,sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&*(p+i));
}
for(int i=0;i<n;i++){
    sum+=*(p+i);
}
printf("sum of elements%d=",sum);
    return 0;
}