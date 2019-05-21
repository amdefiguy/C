

/* Progarm Insertion Deletion into Queue */
#include<stdio.h>
#include<malloc.h>
struct que
{
 int info;
 struct que *next;
};
void inqueue(struct que**,struct que**,int);
void delqueue(struct que**);
void display(struct que*);

/* main function */
void  main(void)
{
 struct que *front, *rear;
 int choice, item;
 front = NULL;
 rear  = NULL;
 do
 {
  do
  {
   printf("\n \t 1. Insert in Queue  ");
   printf("\n\t  2. Delete from Queue ");
   printf("\n\t  3. Exit ");
   printf("\n\t Enter choice : ");
   scanf(" %d",&choice);
   if(choice<1 || choice>3)
      printf("\n Invalid choice - try again");
  }while (choice<1 || choice>3);
  switch(choice)
  {
   case 1:
  printf("\n Enter new element: ");
  scanf("%d", &item);
  inqueue(&front,&rear,item);
  printf("Queue after insertion is : ");
  display(front);
  break;
   case 2:
  delqueue(&front);
  display(front);
  break;
   default:
  printf("\n End of program ");
   } /* end of switch */
  }while(choice !=3);
 return;

 }

  /*end of main function */

 /*function to insert elements into queue */
 void inqueue(struct que **front,struct que **rear,int x)
 {
  struct que *nw;
  nw=(struct que*)malloc(sizeof(struct que));
   nw->info = x;
  nw->next = NULL;

  if((*front)==NULL)
    (*front)=nw;
  else
  {
    printf("\n Hello hai '");
    (*rear)->next=nw;
  }

  (*rear)=nw;
 }

 /*function to delete element from queue */
 void delqueue(struct que **front)
 {
  struct que *save;
  if((*front)==NULL)
printf("\n Queue is empty");
  else
   {
     save = *front;
     (*front)=(*front)->next;
     free(save);
   }
 }

 /*function to display queue elements */
 void display(struct que *front)
 {
  printf ("\n The queue is : ");
  if (front==NULL)
      printf("\n Queue is empty");
  else
   {
    while(front != NULL)
     {
      printf(" ->%d",front->info);
      front=front->next;
     }
   }
 }  /*end of display */

