#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i=0;  i<t; i++)
    {
        long long n;
        cin>>n;int flag=0;
        for(int j=3; j<=n; j=j+2)
        {
            if(n%j==0)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;

            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }


}
