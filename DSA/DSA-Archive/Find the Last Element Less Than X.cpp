#include<bits/stdc++.h>
using namespace std;
int lastElementLessThanX(vector<int>vec,int x)
{
    int low=0;
    int high=vec.size()-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(vec[mid]>=x)
        {
            high=mid-1;
        }
        else if(vec[mid]<x)
        {
            ans=mid;
            low=mid+1;
        }

    }

    return ans;
}
int main()
{
     int n;
    cin>>n;
    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        int element;
        cin>>element;
        vec.push_back(element);
    }
    int element;
    cin>>element;
    cout<<lastElementLessThanX(vec,element);
}
