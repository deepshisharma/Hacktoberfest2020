#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node
{
   int i;
   struct node *next,*prev;
};
typedef struct node node;
node *start =NULL;
node *last = NULL;

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
	 t->next=NULL;
	 t->prev=NULL;
	 if(start==NULL && last==NULL)
	 {
	   start=t;
	   last=t;
	 }
	 else
	 {
	  t->next=start;
	  start->prev=t;
	  start=t;
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
	 t->next=NULL;
	 t->prev=NULL;
	 if(start==NULL && last==NULL)
	 {
	   start=t;
	 }
	 else
	    {
        for(p=start;p->next!=NULL;p=p->next){}
	    t->prev=p;
	     p->next=t;
	     t->next=NULL;
	     last=t;


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
	 t->next=NULL;
	 t->prev=NULL;
	 if(start==NULL && last==NULL)
	 {
	   start=t;
	 }
	 else
	 {
	     printf("\n\n\n\n Enter search number");
	     scanf("%d",&srno);
	     for(p=start;p->i!=srno&& p!=NULL;p=p->next){}
	     if(p==NULL)
		printf("\n\n Search number not found");
	     else
	       {
	           t->prev=p->prev;
		       t->next=p;
		       p->prev=t;
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
	 t->next=NULL;
	 t->prev=NULL;
	 if(start==NULL && last==NULL)
	 {
	   start=t;
	 }
	 else
	 {
	     printf("\n\n\n\n Enter search number");
	     scanf("%d",&srno);
	     for(p=start;p->i!=srno&& p!=NULL;p=p->next){}
	     if(p==NULL)
		printf("\n\n Search number not found");
	     else
	       {

		 t->next=p->next;
		 t->prev=p;
		 p->next=t;
		 p=p->next;
		 if(p->next==NULL)
		 {
		    last=t;
		 }
		 else
		 {
		     p=p->next;
		     p->prev=t;

		 }
	       }
	 }
     }
   }

   //Function to remove a node
  void rem()
   {
       node *t,*p;
     int srno;
	 if(start==NULL && last==NULL)
	 {
	   printf("No element to delete");
	 }
	 else
	 {
	     printf("\n\n\n\n Enter search number");
	     scanf("%d",&srno);
	     if(start->i==srno)// when first element is the search number....
        {
	         t=start;
	         start = start->next;
	         start->prev=NULL;
	         free(t);
	     }
	     else
	     {
	     for(p=start;p->next->i!=srno&& p!=NULL;p=p->next){}
	     if(p==NULL)
		printf("\n\n Search number not found");
	     else
	       { t=p->next;
	       if(t->next==NULL)
	       {
	          p->next=NULL;
	           last=p;
	           free(t);
	       }
	       else
	       {
		 p->next=t->next;
		 p->next->prev=p;
		 free(t);
	       }
	 }
	 }
	 }
   }


 void remlast()
   {
       node *t,*p;
	 if(start==NULL)
	 {
	   printf("No element to delete");
	 }

	     for(p=start; p->next->next!=NULL;p=p->next);
	       {
		 p->next=NULL;
		 last=p;
		 free(t);
	       }
	 }


	 //Function to remove first element from the list
	  void rembeg()
   {
       node *t;
	 if(start==NULL && last==NULL)
	 {
	   printf("No element to delete");
	 }
	 else
	 {

		 start=start->next;
		 start->prev=NULL;
		 free(t);
     }

   }



   // Function to display the list
   void displast()
   {
     node *p;
     for(p=last;p!=NULL;p=p->prev)
     {
	printf("%5d",p->i);
     }
   }
   void dispfor()
   { node *p;
       for(p=start;p!=NULL;p=p->next)
       {
           printf("%5d",p->i);
       }
   }

int main()
{
   int ans;
  do
  {
    printf("\n\n 1......... Add a new node at beg");
    printf("\n 2......... Add a new node at last");
    printf("\n 3......... Add a new node at mid before");
    printf("\n 4......... Add a new node at mid after");
    printf("\n 5......... Display the list from last");
    printf("\n 0......... Display the list from first");
    printf("\n 6......... Remove from the list");
    printf("\n 7......... Remove last element from the list");
    printf("\n 8 ......... Remove first element from the list");
    printf("\n 9......... Exit");
    printf("\n\n Enter your choice");
    scanf("%d",&ans);
    switch(ans)
    {
      case 1: addbeg();break;
      case 2: addlst();break;
      case 3: addmdb();break;
      case 4: addmdaf();break;
      case 5: displast();break;
      case 0: dispfor();break;
      case 6: rem();break;
      case 7: remlast();break;
      case 8: rembeg();break;
    }
    getch();
  }while(ans!=9);

   getch();
   return 0;
}




































