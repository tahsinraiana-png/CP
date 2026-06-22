#include<stdio.h>
int main()
{
    int k,w,n,o=0;;
    scanf("%d %d %d",&k,&n,&w);


    for(int i=1; i<=w; i++)
    {
        o=o+i*k;
    }
    int c=o-n;
    if(c==0)
    {
        printf("0");
    }
    else
    {
        printf("%d",c);
    }
    return 0;
}
