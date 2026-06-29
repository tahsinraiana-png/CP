#include<bits/stdc++.h>
using namespace std;
int insertELement(vector<int> v, int target)
{
  int low=0;
  int high=v.size()-1;
  int ans=v.size();
  int mid;
  while(low<=high)
  {
      mid=(low+high)/2;
      if(v[mid]==target)
      {
          return mid;
      }
      else if(v[mid]>target)
      {
          ans=mid;
          high=mid-1;
      }
      else if(v[mid]<target)
      {
          low=mid+1;
      }
  }

  return ans;
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
    cout<<insertELement(v,target);

}
