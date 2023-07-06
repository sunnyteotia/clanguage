//program to print sumof elements of array
/*#include<stdio.h>
int main(){
int a[20],n,sum=0;
printf("enter the no.of elements=\n");
scanf("%d",&n);
printf("enter elements of array\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    sum+=a[i];
}
printf("sum of elements of array=%d",sum);
    return 0;
}*/
//program to two  input 2 arrays and output the sum of corresponding elements of array
/*#include<stdio.h>
int main(){
int a[30][30],b[30][30],c[30][30],m,n,sum,i,j;
printf("enter the order of both matrix\n");
scanf("%d %d",&m,&n);
printf("elements of first array\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
    printf("elements of second array\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
   c[i][j]=a[i][j]+b[i][j];
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf(" %d",c[i][j]);
    }
}
    return 0;
}*/
//wap to find the minimum and maximum element of array
/*#include<stdio.h>
#include<math.h>
int main(){
    int i,a[20],n,m1=-1999999,m2=99999999;
    printf("enter no. of  elements=\n");
    scanf("%d",&n);
    printf("enter elements of array=\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        m1=fmax(m1,a[i]);
        m2=fmin(m2,a[i]);
    }
    printf("maximum element=%d and minimum element=%d",m1,m2);
    return 0;
}*/
//wap to search an element in an array using linear search
#include<stdio.h>
int main(){
    int n,a[20],k,flag=1;
    printf("enter no.of elements=\n");
    scanf("%d",&n);
    printf("enter elements of array=\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element to searched=\n");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(a[i]==k){
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("element is found=%d",k);
    }
    else{
        printf("element is not found");
    }
    return 0;
}