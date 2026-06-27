#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        int ans=0;
        int total=0;
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        for(int k=0;  k<n; k++)
        {
            if(arr[k]==1)
            {
                total=0;
            }
            else
            {
                total++;
                if(total>ans)
                {
                    ans=total;
                }
            }
        }
        cout<<ans<<endl;
    }
}
