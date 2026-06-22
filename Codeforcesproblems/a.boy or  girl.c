#include<stdio.h>
int main()
{
    char str[50];
    gets (str);
    int len;
    for(int i=0;str[i]!='\0'; i++)
    { int j=i+1;
    len++;
        while(str[j]!='\0')
        {if(str[i]==str[j])
        {
            char temp=str[j];
            str[j]=str[j+1];
            str[j+1]=temp;

        } j++;}
    }
    if(len%2==0)
    {
        CHAT WITH HER!
    }
    else
    {
    IGNORE HIM!
    }
    return 0;


}

