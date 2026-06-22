#include<iostream>
using namespace std;
int main()
{
    int t;
    string str;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>str;
        int total1=0;
        int total2=0;
        for(int j=0; j<3; j++)
        {
            total1=(str[j]-'0')+total1;
        }
        for(int k=3; k<6; k++)
        {
            total2=(str[k]-'0')+total2;
        }
        if(total1==total2)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
    }
}
