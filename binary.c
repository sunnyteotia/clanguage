 #include<stdio.h>
 #include<math.h>
int main(){
    int n,i=0,rem;
    scanf("%d",&n);
    int a[10];
    while(n>0){
        rem=n%2;
        n/=2;
        a[i]=rem;
        i++;
    }
    printf("binary=");
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    int decimal=0;
    int power;
    for(int j=0;j<=i-1;j++){
    decimal+=a[j]*pow(2,j);
    }
        printf("\ndecimal=%d",decimal);
    return 0;
}
