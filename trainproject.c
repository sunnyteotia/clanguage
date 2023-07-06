#include<stdio.h>
#include<string.h>
#define MAX 50
typedef struct Time{
  int hour;
  int minute;
}Time;
typedef struct Train_INFO{
    int trainNo;
    char trainName[20];
    char start_st[30];
    char end_st[30];
   Time Departure_time;
   Time Arrival_time;
}TRAIN;
void train_edit(TRAIN*,int*);
int main(){
int no_of_trains;
int i;
int choice;
char dept_st[30];
char arr_st[30];
Time train_time;
TRAIN train[MAX];
//call train_edit function first time
train_edit(train,&no_of_trains);
while(1){
  //display menu
  printf("\t\t\t*****MENU*****\n");
  printf("1.List all the trains departed from a particular station.\n");
  printf("2.List all the trains departed from a particular station at a particular time.\n");
  printf("3.List all the trains departed from a particular within the next one hour of a given time\n");
  printf("4.List all the trains between a pair of start station and end station.\n");
  printf("5.Edit train details.\n");
  printf("6.exit.\n");
  printf("Your choice:\n");
  //INPUT CHOICE
  scanf("%d",&choice);
  switch(choice){
    //List all the trains departed from a particular station
    case 1:
    printf("\t\t\t****INPUT DETAILS****\n");
    printf("Depart station\n");
    gets(dept_st);
    //print trains
    for(int i=0;i<no_of_trains;i++){
      if(strcmp(train[i].start_st,dept_st)==0){
        printf("%d\t\t%s\t%s\t%d:%d\t%d:%d\n",train[i].trainNo,train[i].trainName,train[i].start_st,train[i].end_st,
        train[i].Departure_time.hour,train[i].Departure_time.minute,train[i].Arrival_time
        .hour,train[i].Arrival_time.minute);
      }
    }
    printf("\n");
    break;
    //list all the trains departed from a particular station at a particular time 
    case 2:
    printf("\n\t\t****INPUT DETAILS****\n");
    printf("DEPART STATION:\n");
    gets(dept_st);
    printf("train.time:\n");
    printf("HOUR:\n");
    scanf("%d",&train_time.hour);
    printf("Minute:\n");
    scanf("%d",&train_time.minute);
    //print trains
    for(int i=0;i<no_of_trains;i++){
      if(strcmp(train[i].start_st,dept_st)==0 && train[i].Departure_time.hour==train_time.hour&&
      train[i].Departure_time.minute==train_time.minute){
        printf("%d\t\t%s\t%s\t%s\t%d:%d\t%d:%d\n",train[i].trainNo,train[i].trainName,train[i].start_st,train[i].end_st,train[i].Departure_time.hour,train[i].Departure_time.minute,train[i].Arrival_time.hour,train[i].Arrival_time.minute);
      }
    }
    printf("\n");
    break;
    //List all the trains departed from particular station within the next one hour of a given time
    case 3:
    printf("\n\t\t****INPUT DETAILS****\n");
    printf("depart station:\n");
    gets(dept_st);
    printf("Time:\n");
    printf("HOUR:");
    scanf("%d",&train_time.hour);
    printf("MINUTE:\n");
    scanf("%d",&train_time.minute);
    //print trains
    for(int i=0;i<no_of_trains;i++){
      if(strcmp(train[i].start_st,dept_st)==0 && ((train[i].Departure_time.hour==train_time.hour && train[i].Departure_time.minute>=train_time.minute)|| (train[i].Departure_time.hour==train_time.hour+1&&train[i].Departure_time.minute<=train_time.minute))){
        printf("%d \t\t%s\t%s\t%s\t%d:%d\t%d:%d\n",train[i].trainNo,train[i].trainName,train[i].start_st,train[i].end_st,train[i].Departure_time.hour,train[i].Departure_time.minute,train[i].Arrival_time.hour,train[i].Arrival_time);
      }
    }
    printf("\n");
    break;
    //List all the trains between a pair of start station and end  station 
    case 4:
    printf("\n\t\t****INPUT DETAILS****\n");
    printf("depart station:");
    gets(dept_st);
    printf("arrival station");
    gets(arr_st);
    //print trains
    for(int i=0;i<no_of_trains;i++){
      if((strcmp(train[i].start_st,dept_st)==0)&&(strcmp(train[i].end_st,arr_st)==0)){
        printf("%d\t\t%s\t%s\t%s\t%d:%d\t%d:%d\n",train[i].trainNo,train[i].trainName,train[i].start_st,train[i].end_st,train[i].Departure_time.hour,train[i].Departure_time.minute,train[i].Arrival_time.hour,train[i].Arrival_time.minute);
      }
    }
    printf("\n");
    break;
    //Edit train details ,call for train_edit
    case 5:
    printf("\n");
    train_edit(train,&no_of_trains);
    break;
    //Exit
    case 6:
    return 0;
    //wrong choice
    default:
    printf("\n ERROR! WRONG CHOICE \n\n");
  
  }
}
return 0;
}
void train_edit(TRAIN*train,int*no_of_trains){
  int choice;
  int i,train_num;
  TRAIN temp;
  while(1){
    //Display train edit menu
    printf("\t\t****TRAIN EDIT MENU****\n");
    printf("1.Add train.\n");
    printf("2.Delete Train.\n");
    printf("3.EXIT train edit menu.\n");
    printf("your choice=");
    //input choice 
    scanf("%d",&choice);
    switch(choice){
      //add train
      case 1:
      //already maximum trains
      if(*no_of_trains>=MAX){
        printf("\n ERROR !there are already maximum trains.\n\n");
        break;
      }
      //input trains details in temp variable
      printf("\n Input train Number:");
      scanf("%d",&temp.trainNo);
      //Check if train number already exist or not
      for(i=0;i<*no_of_trains;i++){
        if(train[i].trainNo==temp.trainNo){
          printf("Error!Train number %d already exist.please try again.\n\n");
          temp.trainNo=-1;
          break;
        }
      }
      if(temp.trainNo==-1)
        break;
        printf("INPUT train Name:\n");
        gets(temp.trainName);
        printf("Input start station :\n");
        gets(temp.start_st);
        printf("Input end station:\n");
        gets(temp.end_st);
        printf("Input departure Time:\n");
        printf("Hour\n");
        scanf("%d",&temp.Departure_time.hour);
        printf("Minute:\n");
        scanf("%d",&temp.Departure_time.minute);
        printf("Input Arrival Time:\n");
        printf("Hour:\n");
        scanf("%d",&temp.Arrival_time.hour);
        printf("Minute:\n");
        scanf("%d",&temp.Arrival_time.minute);
        //And temp into sorted array
        train[*no_of_trains]=temp;
        for(i=*no_of_trains;i>=1;i--){
          if(train[i-1].trainNo>=train[i].trainNo){
            temp=train[i-1];
            train[i-1]=train[i];
            train[i]=temp;
          }
          else
          break;
        }
        *no_of_trains=*no_of_trains+1;
        printf("train %d added succesfully. \n\n",train[i].trainNo);
        break;
        //delete train
      case 2:
      //no train available
      if(*no_of_trains==0){
        printf("\nERROR! No train Available.\n\n");
        break;
      }
      //input train details 
      printf("\n Input train Number:");
      scanf("%d",&train_num);
      //find and delete train
      for(i=0;i<=*no_of_trains-1;i++){
          if(train[i].trainNo==train_num){
            while(i<=*no_of_trains-1){
              train[i]=train[i+1];
              i++;
            }
            *no_of_trains=*no_of_trains-1;
      printf("trains %d deleted succesfully.\n\n",train_num);
      train_num=-1;
      break;
          }
      } 
      //train not found 
      if(train_num!=-1)
      printf("Error ! train%d not found \n\n",train_num);
      break;
      //Exit train edit menu
      case 3:
      printf("\n");
      return;
      //wrong choice 
      default:
      printf("\n Error!Wrong choice.\n\n");
    }
  }
}