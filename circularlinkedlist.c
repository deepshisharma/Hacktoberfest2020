#include<stdio.h>
#include<malloc.h>
struct node
{
   int i;
   struct node *next;
};
typedef struct node node;
node *start;

// Function to add a node at beg
  void addbeg()
  {
     node *t;
     t=(node *) malloc(sizeof(node));
     if(t==NULL)
     {
	printf("\n\n Fail to create the node ");
     }
     else
     {
	 printf("\n Enter the value of the node");
	 scanf("%d",&t->i);
	 if(start==NULL)
	 {
	   start=t;
	   start->next=start;
	 }
	 else
	 {
	     node *p=start;
	     while(p->next!=start)
	    {
	      p=p->next;
	    }
	    t->next=start;
	    start=t;
	    p->next=start;
	 }
    }
   }

   // Function to add a node at last
  void addlst()
  {
     node *t,*p;
     t=(node *) malloc(sizeof(node));
     if(t==NULL)
     {
	printf("\n\n Fail to create the node ");
     }
     else
     {
	 printf("\n Enter the value of the node");
	 scanf("%d",&t->i);
	 if(start==NULL)
	 {
	   start=t;
	   t->next=start;
	 }
	 else
	 {
	     for(p=start;p->next!=start;p=p->next){}
	     p->next=t;
	     t->next=start;

	 }
     }

   }


    // Function to add a node at mid before
  void addmdb()
  {
     node *t,*p;
     int srno;
     t=(node *) malloc(sizeof(node));
     if(t==NULL)
     {
	printf("\n\n Fail to create the node ");
     }
     else
     {
	 printf("\n Enter the value of the node");
	 scanf("%d",&t->i);
	 if(start==NULL)
	 {
	   start=t;
	   t->next=start;
	 }
	 else
	 {
	     printf("\n\n\n\n Enter search number");
	     scanf("%d",&srno);
	     for(p=start;p->next->i!=srno;p=p->next){}
	     if(p==NULL)
		printf("\n\n Search number not found");
	     else
	       {
		 t->next=p->next;
		 p->next=t;
	       }
	 }
     }
   }

    // Function to add a node at mid after
  void addmdaf()
  {
     node *t,*p;
     int srno;
     t=(node *) malloc(sizeof(node));
     if(t==NULL)
     {
	printf("\n\n Fail to create the node ");
     }
     else
     {
	 printf("\n Enter the value of the node");
	 scanf("%d",&t->i);
	 if(start==NULL)
	 {
	   start=t;
	   t->next=start;
	 }
	 else
	 {
	     printf("\n\n\n\n Enter search number");
	     scanf("%d",&srno);
	     for(p=start;p->i!=srno;p=p->next){}
	     if(p==NULL)
		printf("\n\n Search number not found");
	     else
	       {
		 t->next=p->next;
		 p->next=t;
	       }
	 }
     }
   }

 void rembeg()
  {

	 if(start==NULL)
	 {
	   printf("the list is empty");
	 }
	 else
	 {
	      node *p=start;
	      if(p->next=start)
	      {
	          start=NULL;
	          free(p);
	      }

	 }

   }
    void remend()
  {
     node *d,*p=start;
	 if(start==NULL)
	 {
	   printf("the list is empty");
	 }
	 else
	 {
	     if(p->next==start)

	     {
	         start=NULL;
	         free(p);
	     }
	     else
	     {
	         while(p->next!=start)
	         {
	             d=p;
	             p=p->next;

	         }
	         d->next=start;
	         free(p);
	     }
	     }

	 }





   // Function to display the list
   void disp()

     {
         node *p=start;
         while(p->next!=start)
         {
             printf("%5d",p->i);
             p=p->next;
         }
        printf("%5d",p->i);
     }


void main()
{
   int ans;
  do
  {

    printf("\n\n 1......... Add a new node at beg");
    printf("\n 2......... Add a new node at last");
    printf("\n 3......... Add a new node at mid before");
    printf("\n 4......... Add a new node at mid after");
    printf("\n 5......... Display the list");
    printf("\n 6......... Delete an item from beginning of the list");
    printf("\n 7......... Delete an item from end of the list");
    printf("\n 9......... Exit");
    printf("\n\n Enter your choice");
    scanf("%d",&ans);
    switch(ans)
    {
      case 1: addbeg();break;
      case 2: addlst();break;
      case 3: addmdb();break;
      case 4: addmdaf();break;
      case 5: disp();break;
      case 6: rembeg();break;
      case 7: remend();break;

    }
    getch();
  }while(ans!=9);

   getch();
}

