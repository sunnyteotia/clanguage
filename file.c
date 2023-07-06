// check if a file exist or not before reading it
/*#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("newtext.txt","w");
if(fptr==NULL){
    printf("file doesn't exist\n");
}
else{
    fclose(fptr);
}
    return 0;
}*/
// reading from file
/*#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr = fopen("hari.text","r");
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    return 0;
}*/
// writing to a file
/*#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("harekrishna.text","a");
fputc('B',fptr);
fputc('O',fptr);
fputc('L',fptr);
fclose(fptr);
    return 0;
}*/
// function of end of file[FILE]
/*#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("harekrishna.text","r");
    char ch=fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}*/
// wap  to read 5 integers from file
/*#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("integers.text","r");
int number;
fscanf(fptr,"%d",&number);
printf("number=%d\n",number);
fscanf(fptr,"%d",&number);
printf("number=%d\n",number);
fscanf(fptr,"%d",&number);
printf("number=%d\n",number);
fscanf(fptr,"%d",&number);
printf("number=%d\n",number);
fscanf(fptr,"%d",&number);
printf("number=%d\n",number);
fclose(fptr);
    return 0;
}*/
// wap to take student information from user
/*#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("student.text", "w");
    char name[20];
    int age;
    float cgpa;
    printf("eneter the name of student:\n");
    scanf("%s", name);
    printf("eneter the age of student:\n");
    scanf("%d", &age);
    printf("eneter the cgpa of student:\n");
    scanf("%f", &cgpa);
    fprintf(fptr, "name= %s\n", name);
    fprintf(fptr, "age =%d\n", age);
    fprintf(fptr, " cgpa %f\n", cgpa);
    fclose(fptr);
    return 0;
}*/
/*#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("odd.text","w");
int n;
printf("enter the number:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%2!=0){
        fprintf(fptr,"%d\n",i);
    }
}
fclose(fptr);
    return 0;
}*/
//wap to read numbers from file and replace them with their  sum
/*#include<stdio.h>

int main(){ 

    FILE *fptr;
    fptr=fopen("sum.text","r");
    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    fclose(fptr);
    int sum=a+b;
    fptr=fopen("sum.text","w");
    fprintf(fptr,"%d",sum);

}*/
/*//wap to copying the content of one file into another file
#include<stdio.h>
#include<string.h>
int main(){
FILE *fptr1,*fptr2;
int i=0;
fptr1=fopen("harekrishna.text","r");
fptr2=fopen("integers.text","w");
char ch;
while((ch=getc(fptr1))!=EOF){
putc(ch,fptr2);
}
fclose(fptr1);
fclose(fptr2);
    return 0;
}*/
//wap to copying the content of one file into another file and print count of these elements 
/*#include<stdio.h>
#include<string.h>
int main(){
FILE *fptr1,*fptr2;
int i=0;
fptr1=fopen("harekrishna.text","r");
fptr2=fopen("integers.text","w");
char ch;
while((ch=getc(fptr1))!=EOF){
putc(ch,fptr2);
i++;
}
fclose(fptr1);
fclose(fptr2);
printf("%d",i);
    return 0;
}*/
//wap to count and print the no. of characters,lines and words in a file 
/*#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("harekrishna.text","r");
char ch;
int characters=0,lines=0,words=0;
while((ch=fgetc(fptr))!=EOF){
    characters++;
    if(ch==' '||ch=='\0'){
    lines++;
    }
    if(ch==' '||ch=='\0'||ch=='\t' || ch==','){
        words++;
    }
    if(characters>0){
        words++;
        lines++;
    }
}
printf("no.of lines=%d\n",lines);
printf("no.of words=%d\n",words);
printf("no.of characters=%d\n",characters);
    return 0;
}*/
//question no.22 of unit 5 question bank
#include<stdio.h>
int main(){
    FILE *f1,*f2,*f3;
    f1=fopen("input.text","w");
    int i,j;
    printf("enter the data\n");
    for(int i=0;i<=10;i++){
        scanf("%d",&j);
        putw(j,f1);
    }
    fclose(f1);
    f1=fopen("input.text","r");
    f2=fopen("odd.text","w");
     f3=fopen("even.text","w");
     while((j=getw(f1))!=EOF){
        if(j%2==0){
            putw(j,f3);
        }
        else{
            putw(j,f2);
        }
     }
     fclose(f1);
     fclose(f2);
     fclose(f3);
     f2=fopen("odd.text","r");
     f3=fopen("even.text","r");
     printf("\n contents of odd file=\n");
     while((j=getw(f2))!=EOF){
        printf("%d ",j);
     }
     printf("\n contents of even file=\n");
     while((j=getw(f3))!=EOF){
        printf("%d ",j);
     }
     fclose(f2);
     fclose(f3);
}