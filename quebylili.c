#include<stdio.h>
#include<malloc.h>
struct que
{
    int val;
    struct que *next;
};
typedef struct que q;
q *start=NULL;
/*void insatbeg()
{
    q *t;
    t=(q *)malloc(sizeof(q));
    if(t==NULL)
    {
        printf("failed to create node");
    }
    else
    {
        printf("enter the value");
        scanf("%d",&t->val);
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
}*/
void insert()
{
    q *t,*p;
    t=(q *)malloc(sizeof(q));
    if(t==NULL)
    {
        printf("failed to create node");
    }
    else
    {
        printf("enter the value");
        scanf("%d",&t->val);
        t->next=NULL;
        if(start==NULL)
        {
            start=t;
        }
        else
        {
            for(p=start;p->next!=NULL;p=p->next);

                p->next=t;

        }
    }
}


void rmv()
{
        q *t;
        if(start==NULL)
        {
            printf("no element to delete");
        }
        else
        {
            t=start;
            start=start->next;
            free(t);
        }


}


void disp()
{ q *p;
for(p=start;p!=NULL;p=p->next)
{
    printf("%5d",p->val);
}
}
int main()
{ int ans;

do{
    printf("\n\n\t1........  insert the value");
    printf("\n\n\t2........ remove the value");
    printf("\n\n\t4.........display ");
    printf("\n\n\t3........ quit");
    printf("\n\n\tenter your choice");
    scanf("%d",&ans);
    switch(ans)
    {
    case 1: insert();break;
    case 2:rmv();break;
    case 4:disp();
    }
}

while (ans!=3);

}




