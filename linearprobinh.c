#include<stdio.h>
int LinearProbing(int table[],int TS,int x)
{
    int m=x%TS;
    int flag=1;
    if(table[m]==0)
        table[m]=x;
    else{
        flag=0;
        for(int i=1;i<TS;i++)
        {
            int newpos=(m+i)%TS;
            if(table[newpos]==0)
            {
                table[newpos]=x;
                flag=1;
                break;
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
        LinearProbing(table,TS,x);

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