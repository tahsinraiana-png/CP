#include<stdio.h>
int main()
{
    int k,l,m,n,d;
    scanf("%d %d %d %d %d", &k,&l,&m,&n,&d);
    int arr[100000];
    int a=0;
    int b=0;
    for(int j=k; j<=d; j=j+k)
    {
        a++;
        arr[b++]=j;
    }




    for(int i=l; i<=d; i=i+l )
    {int flag=0;
        for(int s=0; s<b; s++)
        {
            if(arr[s]==i)
            {
                flag=1;
                break;
            }




        }
        if(flag==0)
        {
            a++;
            arr[b++]=i;
        }

    }

    for(int i=m; i<=d; i=i+m )
    {int flag=0;
        for(int s=0; s<b; s++)
        {
            if(arr[s]==i)
            {
                flag=1;
                break;
            }




        }
        if(flag==0)
        {
            a++;
            arr[b++]=i;
        }

    }

    for(int i=n; i<=d; i=i+n )
    {int flag=0;
        for(int s=0; s<b; s++)
        {
            if(arr[s]==i)
            {
                flag=1;
                break;
            }




        }
        if(flag==0)
        {
            a++;
            arr[b++]=i;
        }

    }

    printf("%d   ",a);
}




