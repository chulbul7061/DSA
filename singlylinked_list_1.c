#include<stdio.h>
int main()
{
  struct node
  {
    int data;
    struct node *next;

  }


struct node *head , *newnode , *temp;
head=NULL;
int choice;

while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");

scanf("%d",&newnode->data);
newnode->next=NULL;

  if(head==NULL)
    {
         head=temp=newnode;
    }
    else
    {
      temp->next=newnode;
      temp=newnode;
    }
    printf("do you want to continue enter 1 or 0 to exit()");
    scanf("%d",&choice);
}
  temp=head;
  while(temp!=0)
  {
    printf("%d",&temp->data);
    temp=temp->next;
    
  }
}
