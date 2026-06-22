#include<stdio.h>
int main()
{
    char str[100];
    char str1[100];
    char str2[100];
    gets(str);
    gets(str1);
    gets(str2);

    for(int i=0; str[i]!='\0'; i++)
    { int flag=0;
        for(int j=0; str2[j]!='\0'; j++)
        {
            if(str[i]==str2[j])
            {
                flag=1;


            }
            if(flag=1)
            {
                str2[j]=str2[j+1];

        }
    }

}puts(str2);
}
