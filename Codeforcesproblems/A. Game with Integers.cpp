#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    int flag=1;
    for(int i=0; i<t;  i++)
    {
        cin>>n;
        for(int i=0; i<10; i++)
        {
           n=n+1;
           if(n%3==0)
           {
               cout<<"first";
               flag=0;
               break;
           }
        }
        if(flag==1)
        {
            cout<<"second";
        }
    }
}
