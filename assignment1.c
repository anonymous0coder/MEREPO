#include<stdio.h>
int main()
{
    int temp,lis[10],eve[10],odd[10],a=0,b=0,i,j,k,x,ep,op,ap,dp;
    printf("Enter the array :\n");
    for(x=0;x<10;++x)
    {
        scanf("%d",&lis[x]);
    }
   
    for(i=0;i<10;++i)
    {   
        for(j=0;j<(9-i);++j)
        {
            if (lis[j]>lis[j+1])
            {
                temp=lis[j];
                lis[j]=lis[j+1];
                lis[j+1]=temp;
            }
        }
    
    }
    for(k=0;k<10;++k)
    {
        if (lis[k]%2==0)
        {
            eve[a]=lis[k];
            a+=1;
        }
        else 
        {
            odd[b]=lis[k];
            b+=1;
        }
    }
    printf("Odd number list is :");
    for(op=0;op<b;++op)
    {
        
        printf(" %d",odd[op]);

    }
    printf("\n");
    printf("EVEN number list is :");
    for(ep=0;ep<a;++ep)
    {
       
        printf(" %d",eve[ep]);
       
    }
    printf("\n");
    printf("Number list in ascending order is :");
    for(ap=0;ap<10;++ap)
    {
        
        printf(" %d",lis[ap]);
        
    }
    printf("\n");
    printf("Number list in descending order is :");
    for(dp=9;dp>=0;--dp)
    {
        printf(" %d",lis[dp]);
    } 
    scanf(" ");
    return 0;
}