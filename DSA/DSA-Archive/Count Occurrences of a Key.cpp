#include<bits/stdc++.h>
using namespace std;
int countOccurrences(vector<int> arr, int k)
{
    int low=0;
    int high=arr.size()-1;
    int ans1=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=k)
        {
            ans1=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    int ans=arr.size();
    low=0;
    high=arr.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<=k)
        {

            low=mid+1;
        }
        else
        {
            ans=mid;
            high=mid-1;
        }
    }
    return ans-ans1;

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
    cout<<countOccurrences(vec,element);
}
