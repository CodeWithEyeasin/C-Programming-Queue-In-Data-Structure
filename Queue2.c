#include<stdio.h>
int queue[5],f=-1,r=-1;
void rear();
void front();
void display();
int main()
{
    int ch;
    printf("1.REAR\n2.FRONT\n3.DISPLAY\n4.EXIT");
    while(1)
    {
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1:rear();
           break;
           case 2:front();
           break;
           case 3:display();
           break;
           case 4:exit(0);
           break;
           default:printf("Invalid Choice");
        }
    }


    return 0;
}
void rear()
{
    int item;
    if(r==5-1)
    {
        printf("Queue is full");
    }
    else
    {
        if(f==-1)
        {
            f=0;
        }
        printf("Insert Element In Queue: ");
        scanf("%d",&item);
        r=r+1;
        queue[r]=item;
    }
}
void front()
{
    if(f==-1||f > r)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Deleted %d",queue[f]);
        f=f+1;
    }
}
void display()
{
    int i;
    if(f==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Queue Elements: \n");
        for(i=f;i<=r;i++)
        {
            printf("Queue [%d] = %d\n",i,queue[i]);
        }
    }
}
