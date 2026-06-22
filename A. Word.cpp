#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int uppercase=0;
    int lowercase=0;
    for(int i=0; i<s.length(); i++)
    {
        if(isupper(s[i]))
           {
               uppercase++;
           }
        if(islower(s[i]))
            {
                lowercase++;
            }
    }
    for(int i=0; i<s.length(); i++)
    {
    if(lowercase>uppercase)
    {
        cout<<(char)tolower(s[i]);
    }
    if(uppercase>lowercase)
    {
        cout<<(char)toupper(s[i]);
    }
    if(uppercase==lowercase)
    {
        cout<<(char)tolower(s[i]);
    }
    }
}
