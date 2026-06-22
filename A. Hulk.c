#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1;

    for(int i=1; a<=n; i++)
    {
        if(a<=n-1)
        printf("I hate that ");
        else
        {
            printf("I hate it ");
        }
        a++;
        if(a>n)
            break;
        else if(a<=n-1)
        {
            printf("I love that ");
        }
        else
        {
            printf("I love it ");
        }
        a++;
    }
    return 0;
}
