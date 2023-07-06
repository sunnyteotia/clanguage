//values and address in pointers
/*#include<stdio.h>
int main(){
int age=39;
int *ptr=&age;
int _age=*ptr;
//value
printf("%d\n",_age);
printf("%d\n",*ptr);
printf("%d\n",*(&age));
//address
printf("%u\n",&age);
printf("%u\n",ptr);
printf("%u",&ptr);
    return 0;
}*/
//question 
/*#include<stdio.h>
int main(){
int x;
int*ptr;
ptr=&x;
*ptr=0;
printf("x=%d\n",x);
printf("ptr=%d\n",*ptr);
*ptr+=5;
printf("x=%d\n",x);
printf("ptr=%d\n",*ptr);
(*ptr)++;
printf("x=%d\n",x);
printf("ptr=%d\n",*ptr);
    return 0;
}*/
//pointer to pointer
//it stores addrress of pointer->use ** to print value
/*#include<stdio.h>
int main(){
float a=1000.00;
float *ptr=&a;
float **pptr=&ptr;
printf("%f\n",a);
printf("%f\n",*ptr);
printf("%f\n",**pptr);
    return 0;
}*/
// pointers in function call
/*#include<stdio.h>
//call by value
void square(int n){
    n=n*n;
    printf("square=%d\n",n);
}
//call by reference
void _square(int *n){
    *n=(*n)*(*n);
    printf("square=%d\n",*n);
}
int main(){
int number=4;
square(number);
// function doesn't effect value of actual parameters
printf("number=%d\n",number);
_square(&number);
//NOW VALUE CHANGE
printf("number=%d\n",number);
    return 0;
}*/

// Swap two numbers,a&b by reference call
/*#include<stdio.h>
void Swap(int *x, int *y);
void _swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    printf("after swapping=%d%d\n",x,y);
}
int main(){
int a=5,b=6;
//call by value
_swap(a,b);
//call by valu not swap the numbers actually
printf("%d %d\n",a,b);
//call by reference
Swap(&a,&b);
//actually swapping occurs
printf("%d %d\n",a,b);
    return 0;
} //call by reference
void Swap(int *x,int *y){
    int temp=*x;
*x=*y;
*y=temp;
printf("after swapping numbers are=%d %d\n",*x,*y);
}*/
//in call by value ->address is always defferent of  variable in passed in functon
/*#include<stdio.h>
//it will make copy of variable in main function and stored value of it in new variable
void printaddress(int n){
    printf("%d\n",&n);
}
int main(){
int n=4;
printf("%d\n",&n);
printaddress(n);
printf("%d\n",&n);
    return 0;
}*/
//but this will not happen in call by reference
/*#include<stdio.h>

void printaddress(int *n){
    printf("%d\n",n);
}
int main(){
int n=4;
printf("%d\n",&n);
printaddress(&n);
printf("%d\n",&n);
    return 0;
}*/
/*#include<stdio.h>
void dowork(int a,int b,int *sum,int *prod,int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
    printf("SUM=%d\n",*sum);
    printf("product=%d\n",*prod);
    printf("average=%d\n",*avg);
}
int main(){
int a=5,b=3;
int *sum,*prod,*avg;
dowork(a,b,&sum,&prod,&avg);
    return 0;
}*/
//wap to find maximum of two number between two numbers
/*#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a, &b);
int *num1,*num2;
num1=&a;
num2=&b;
if(*num1>*num2){
    printf("maximum value=%d\n",*num1);
}
else{
     printf("maximum value=%d\n",*num2); 
}
    return 0;
}*/
//wap to print elements of array in reverse order
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
   int *ptr;
   ptr=&n;
    int a[10];
    for(int i=0;i<*ptr;i++){
        scanf("%d",&a[i]);
    }
    for(int i=*ptr-1;i>=0;i--){
        printf("   %d",  a[i]);
    }
    return 0; 
}*/
//WAP TO REVERSE A STRING USING POINTERS
/*#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char string[20];
    scanf("%s",string);
    n=strlen(string);
    char *p;
    p=string;
    for(int i=n-1;i>=0;i--){
        printf("%c",*(p+i));
    }
}*/
