#include<stdio.h>
int QuadraticProbing(int table[],int TS,int x)
{
    int h=x%TS;
    int flag=1;
    if(table[h]==0)
        table[h]=x;
    else{
        flag=0;
        int i=1;
        while(flag==0)
        {
            int newpos=(h+i*i)%TS;
            i++;
            if(table[newpos]==0)
            {
                table[newpos]=x;
                flag=1;
            }
        }
        }
    return flag;
}
void main()
{
    int key,TS=15;
    int n,x;
    int table[15]={0};
    printf("Enter the no. of elements to store : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        QuadraticProbing(table,TS,x);

    }
    for(int i=0;i<TS;i++)
    {
        printf("%d\t",i);

    }
    printf("\n");
    for(int i=0;i<TS;i++)
    {
        printf("----\t");

    }
    printf("\n");
    for(int i=0;i<TS;i++)
    {
        printf("%d\t",table[i]);

    }
}