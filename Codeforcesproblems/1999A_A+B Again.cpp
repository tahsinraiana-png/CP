#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;


    int num;
    for(int i=0;  i<t; i++)
    {
        int n;
        cin>>n;
        int countt=0;
        num=n;int dig=0;
        while(n>0)
        {

            n=n/10;
            dig++;
        }
        if(dig==2)
        {
            while(num>0)
            {
               countt=countt +num%10;
               num=num/10;
            }
            cout<<countt<<endl;
        }
    }
}
