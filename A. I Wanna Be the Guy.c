#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
int flag;
    for(int i=1; i<=n; i++)
    { flag=0;
        for(int j=0; j<n; j++)
        {
            if(arr[j]==i||arr1[j]==i)
                flag=1;


        }
                if(flag==0)
                break;
    }
    if (flag==1)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
}
