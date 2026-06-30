#include<bits/stdc++.h>
using namespace std;
int firstOccurrence(vector<int>vec)
{
    int low=0;
    int high=vec.size()-1;
    int ans=vec.size();
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(vec[mid]>=1)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
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
    cout<<firstOccurrence(vec);


}
