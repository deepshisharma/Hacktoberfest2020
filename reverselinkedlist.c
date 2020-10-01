#include<stdio.h>
#include<conio.h>
struct node
{
   int i;
   struct node *next;
};
typedef struct node node;
node *start =NULL;

// Function to add a node at beg
  void crlist()
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
	 if(start==NULL)
	 {
	   start=t;
	 }
	 else
	 {
	  t->next=start;
	  start=t;
	 }
     }
   }
   void disp()
   {
     node *p;
     for(p=start;p!=NULL;p=p->next)
     {
	printf("%5d",p->i);
     }
   }
   void rev()
   {
       node *f,*s,*t;
       f=0;
       s=start;
       t=s->next;
       while(s->next!=0)
       {
           s->next=f;
           f=s;
           s=t;
           t=t->next;
       }
       s->next=f;
       start=s;
   }
  /* node * rev(node *strt)
   {
       node *t=NULL;
       if(strt->next!=NULL)
       {
           t=rev(strt->next);
           t->next=strt;
           return strt;
       }
       else
       {
           return strt;
       }
   }*/

int main()
{
     int ans;
     do
     {
    printf("\n\n.....press 1 to enter trhe values to create the list");
    printf("\n\n.....press 2 to display the list");
    printf("\n\n.....press 3 to reverse the list");
    printf("\n\n.....press 4 to quit");
    printf("\n\nenter your choice");
    scanf("%d",&ans);
    switch(ans)
    {
    case 1:crlist(); break;
    case 2:disp(); break;
    case 3:rev();break;
}
     }
while(ans!=4);

}

