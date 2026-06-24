#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    string s="codeforces";

    for(int i=0; i<t; i++)
    {
        char c;
        cin>>c;
        int flag=0;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]==c)
            {
                flag=1;
                break;
            }
            if(flag==1)
                break;
        }
        if(flag==1)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
}
