#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&a);
         scanf("%d",&b);
          scanf("%d",&c);
          if(a+b==c)
          {
              printf("+");
          }
          else if(a-b==c)
          {
              printf("-");
          }
    }

}
