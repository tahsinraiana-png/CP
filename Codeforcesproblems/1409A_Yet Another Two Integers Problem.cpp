#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b;
        cin>>a>>b;
        int minn=0;
        int diff=abs(a-b);
        minn=(diff/10);
        if(diff%10>0)
        {
            minn=minn+1;
        }
                cout<<minn<<endl;

}
}
