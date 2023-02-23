#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
 struct node
    {
        int data;
        struct node *next;
        
    };

    struct node *newnode,*temp,*head;
    //head=NULL;

void insert(int numberOfNode)
{
     for(int i=1;i<=numberOfNode;i++)
  {
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("enter the data of newnode ");
    scanf("%d",&newnode->data);

    newnode->next=NULL;

    if(head==NULL)
    {
        head=temp=newnode;
    }

    else{

        temp->next=newnode;
        temp=newnode;
         }
  }

};


    void printing()
    {
        temp=head;
        while (temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
         }
    } ;

void insertNewFirst()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data of newnode at first position ");
    scanf("%d",&newnode->data);

    newnode->next=head;
    head=newnode;
    
};

void insertLastPosition()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the data of newnode at last position  ");
    scanf("%d",&newnode->data);

    newnode->next=NULL;
    temp=head;
    while (temp->next!=0)                   
    {
       temp=temp->next;  
    }
    temp->next=newnode;
    
};

void deleteBeg()
{
    printf("+++++++++++++++++ TRYING TO DELETE AT FIRST POSITION  +++++++++++++++++++\n");
    if(head==NULL)
    {
        printf("Your Linked is empty currently \n");
    }
    else
    {
        temp=head;
        head=temp->next;
        free(temp);
    }

};

void deleteLast()
{
    printf("@@@@@@@@@@@@@@@@@@@@@@@ DELETE LAST POSITION @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    struct node *Previous;
    temp=head;
    while (temp->next!=0)
    {
        Previous=temp;
        temp=temp->next;

    }
    
    if(temp==head)
    {
        head=NULL;
        free(temp);
    }

    else{
    Previous->next=NULL;
    }
    free(temp);

    
}

int main()
{
   
    int numberOfNode;
    printf("How many node you want to create\n");
    scanf("%d",&numberOfNode);
  
 
     insert(numberOfNode) ;
     printing();
     insertNewFirst();
     printf("----------------------------------\n");
     printing();
     printf("----------------------------------\n");
     insertLastPosition();
     printf("----------------------------------\n");
     printing();
     printf("----------------------------------\n");

    deleteBeg();
    printf("====================================\n");
    printing();
    printf("====================================\n");

    deleteLast();
    printf("====================================\n");
    printing();
    printf("====================================\n");

 return 0;

    
}
