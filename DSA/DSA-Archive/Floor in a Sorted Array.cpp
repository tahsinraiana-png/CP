#include<bits/stdc++.h>
using namespace std;
int floor(vector<int> v, int x)
{
   int low=0;
   int high=v.size()-1;
   int ans=-1;
   int mid;
   while(low<=high)
   {
       mid=(low+high)/2;

       if(v[mid]==x)
       {
           return mid;
       }
       else if(v[mid]<x)
       {
           ans=mid;
           low=mid+1;
       }
       else if(v[mid]>x)
       {
           high=mid-1;
       }
   }

   return ans;

}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        v.push_back(m);
    }
    int  x;
    cin>>x;
    cout<<floor(v, x);

}
