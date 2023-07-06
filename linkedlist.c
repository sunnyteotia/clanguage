//LINKED LIST
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}node;
void traversal(node*ptr){
while(ptr!=NULL){
    printf("%d ",ptr->data);
    ptr=ptr->link;
}
}
int main(){
    node *head1,*head2,*head3,*head4,*head5;
    head1=(struct node*)malloc(sizeof(struct node));
    head2=(struct node*)malloc(sizeof(struct node));
    head3=(struct node*)malloc(sizeof(struct node));
    head4=(struct node*)malloc(sizeof(struct node));
    head5=(struct node*)malloc(sizeof(struct node));
    head1->data=1;
    head1->link=head2;
    head2->data=2;
    head2->link=head3;
    head3->data=3;
    head3->link=head4;
    head4->data=4;
    head4->link=head5;
    head5->data=5;
    head5->link=NULL;
    traversal(head1);
    return 0;
}
