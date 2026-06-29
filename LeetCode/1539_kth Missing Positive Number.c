#include<bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int> v,int k)
{
    int low=0;
    int high=v.size()-1;
    int mid;
    int missing;
    while(low<=high){
        mid=(low+high)/2;
        missing=v[mid]-(mid+1);
        if(missing>=k)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
        return low+k;

    }


int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    int target;
    cin>>target;

}
