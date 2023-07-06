//BINARRY SEARCHING
#include<stdio.h>
int main(){
int n,k,a[20],first=0,last,mid,pos;
printf("enter size of array=\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter element to be searched=\n");
scanf("%d",&k);
last=n-1;
while(first<=last){
mid=(last+first)/2;
if(a[mid]==k){
    printf("element is found at %d position",mid);
    break;
}
else if(a[mid]>k){
last=mid-1;
}
else{
    first=mid+1;
}
}
if(first>last)
printf("element is not found");
    return 0;
}