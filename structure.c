/*#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[50];
    float cgpa;
};
int main(){
    struct student s1;
        s1.roll=111;
        strcpy(s1.name,"krishna");
        s1.cgpa=10.0;
    
    printf("%d\n",s1.roll);
    printf("%s\n",s1.name);
    printf("%f\n",s1.cgpa);

    struct student s2;
        s2.roll=112;
        strcpy(s2.name,"radharani");
        s2.cgpa=10.0;
    
    printf("%d\n",s2.roll);
    printf("%s\n",s2.name);
    printf("%f\n",s2.cgpa);
    struct student s3;
        s3.roll=113;
        strcpy(s3.name,"balaram");
        s3.cgpa=10.0;
    
    printf("%d\n",s3.roll);
    printf("%s\n",s3.name);
    printf("%f\n",s3.cgpa);
    struct student s4={1456,"jagannath",11.0};
    printf("student roll no.=%d\n",s4.roll);
    return 0;
}*/
// program for storing data's->using arrays in structure
/*#include<stdio.h>
#include<string.h>
struct student {
int roll;
char name[50];;
float cgpa;
};
int main(){
struct student ece[100];
ece[0].roll=1455;
strcpy(ece[0].name,"krishna");
ece[0].cgpa=10.0;
    printf("name=%s\n",ece[0].name);
    printf("roll no.=%d\n",ece[0]);
    printf("cgpa=%f\n",ece[0].cgpa);
    return 0;
}
*/
//pointers to structure
/*#include<stdio.h>
#include<string.h>
struct student {
int roll;
char name[50];
float cgpa;

};
int main(){
struct student s1={111,"krishna",10.0};
struct student *ptr=&s1;
printf("student roll no.=%d\n",(*ptr).roll);
    return 0;
}*/
// arrow operators in structure
// we can use (*ptr).code<-> ptr->code
/*#include<stdio.h>
#include<string.h>
struct student {
int roll;
char name[50];
float cgpa;

};
int main(){
struct student s1={111,"krishna",10.0};
struct student *ptr=&s1;
printf("student roll no.with ptr =%d\n",(*ptr).roll);
printf("student->roll no.=%d\n",ptr->roll);
printf("student->name=%s\n",ptr->name);
printf("student->cgpa=%f\n",ptr->cgpa);
    return 0;
}*/
// passing structure to functions
/*#include<string.h>
struct student {
int roll;
char name[50];
float cgpa;
};
void printinfo(struct student s1);
int main(){
struct student s1={111,"krishna",10.0};

    printinfo(s1);
    return 0;
}
void printinfo(struct student s1){
printf("student information = \n");
printf("student->roll no.=%d\n",s1.roll);
printf("student->name=%s\n",s1.name);
printf("student->cgpa=%f\n",s1.cgpa);
}*/
// typedef keyword
/*#include<stdio.h>
#include<string.h>
typedef struct student{
int roll;
char name[50];
float cgpa;
} stu ;
int main(){
    struct student s1;
    stu s2;
    s2.roll=111;
    strcpy(s2.name,"krishna");
    s2.cgpa=10;
    printf("student name=%s",s2.name);
    return 0;
}*/
// to  take input address of 5 persons and then print them
/*#include<stdio.h>
#include<string.h>
typedef struct address{
    int house_no;
    int block;
    char city[100];
    char state[100];
} a ;
int main(){
   struct address a[5];
    a[0].house_no=1;
    a[0].block=18;
    strcpy(a[0].city,"ghaziabad");
    strcpy(a[0].state,"UP");
        printf("house no.=%d\n",a[0].house_no);
        printf("block=%d\n",a[0].block);
        printf("city=%s\n",a[0].city);
        printf("state=%s\n",a[0].state);
        a[1].house_no=2;
    a[1].block=18;
    strcpy(a[1].city,"ghaziabad");
    strcpy(a[1].state,"UP");
        printf("house no.=%d\n",a[1].house_no);
        printf("block=%d\n",a[1].block);
        printf("city=%s\n",a[1].city);
        printf("state=%s\n",a[1].state);
        a[2].house_no=3;
    a[2].block=18;
    strcpy(a[2].city,"ghaziabad");
    strcpy(a[2].state,"UP");
        printf("house no.=%d\n",a[2].house_no);
        printf("block=%d\n",a[2].block);
        printf("city=%s\n",a[2].city);
        printf("state=%s\n",a[2].state);
        a[3].house_no=4;
    a[3].block=18;
    strcpy(a[3].city,"ghaziabad");
    strcpy(a[3].state,"UP");
        printf("house no.=%d\n",a[3].house_no);
        printf("block=%d\n",a[3].block);
        printf("city=%s\n",a[3].city);
        printf("state=%s\n",a[3].state);
        a[4].house_no=5;
    a[4].block=18;
    strcpy(a[4].city,"ghaziabad");
    strcpy(a[0].state,"UP");
        printf("house no.=%d\n",a[4].house_no);
        printf("block=%d\n",a[4].block);
        printf("city=%s\n",a[4].city);
        printf("state=%s\n",a[4].state);
    return 0;
}*/
// same above questions with help of functions
#include<stdio.h>
#include<string.h>
typedef struct address{
    int house_no;
    int block;
    char city[100];
    char state[100];
};
void printinfo(struct address a);
int main(){
    struct address a[5];
    printf("enter info for person 1:\n");
    scanf("%d",&a[0].house_no);
    scanf("%d",&a[0].block);
    scanf("%s",a[0].city);
    scanf("%s",a[0].state);
    printf("enter info for person 2:\n");
    scanf("%d",&a[1].house_no);
    scanf("%d",&a[1].block);
    scanf("%s",a[1].city);
    scanf("%s",a[1].state);
    printf("enter info for person 3:\n");
    scanf("%d",&a[2].house_no);
    scanf("%d",&a[2].block);
    scanf("%s",a[2].city);
    scanf("%s",a[2].state);
    printf("enter info for person 4:\n");
    scanf("%d",&a[3].house_no);
    scanf("%d",&a[3].block);
    scanf("%s",a[3].city);
    scanf("%s",a[3].state);
    printf("enter info for person 5:\n");
    scanf("%d",&a[4].house_no);
    scanf("%d",&a[4].block);
    scanf("%s",a[4].city);
    scanf("%s",a[4].state);
    printinfo(a[0]);
    printinfo(a[1]);
    printinfo(a[2]);
    printinfo(a[3]);
    printinfo(a[4]);
    return 0;
}
void printinfo(struct address a){
    printf("address is: %d, %d, %s, %s\n",a.house_no,a.block,a.city,a.state);
}