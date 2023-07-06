#include<stdio.h>
#include<stdlib.h>
int main(){
int n,a[10],k;
scanf("%d",&n);
for(int i=0;i<n;i++){
   scanf("%d",&a[i]);
}
printf("enter element to be searched\n");
scanf("%d",&k);
int first=0;
int last=n-1;
while(first<=last){
   int mid=(first+last)/2;
   if(a[mid]==k){
      printf("element is found at postion=%d\n",mid);
      break;
   }
   else if(a[mid]<k){
      first=mid+1;
   }
   else{
      last=mid-1;
   }
}
if(first>last){
printf("element is not found");
}
        return 0;
}