#include<stdio.h>
int main()
{
    int n,count,count1;
    scanf("%d",&n);
getchar();
char str[100001];
fgets(str, sizeof(str), stdin);
count=0;
count1=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='A')
        {
            count++;
        }
        else if(str[i]=='D')
        {
            count1++;
        }
    }
    if(count>count1)
    {
        printf("Anton");
    }
    else if(count1>count)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
}
