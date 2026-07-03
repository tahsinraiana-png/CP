#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int> &arr, int st,int mid, int ed)
{
  int i=st;
  int j=mid+1;
  vector<int> temp;
  while(i<=mid&&j<=ed)
  {
      if(arr[i]<arr[j])
      {
          temp.push_back(arr[i]);
          i++;
      }
      else
      {
          temp.push_back(arr[j]);
          j++;
      }
  }
  while(i<=mid)
  {
      temp.push_back(arr[i]);
      i++;
  }
  while(j<=ed)
  {
      temp.push_back(arr[j]);
      j++;
  }
  for(int idx=0; idx<temp.size(); idx++)
  {
      arr[st+idx]=temp[idx];
  }
}
void MergeSort(vector<int> &vec, int st, int ed)
{
    if(st<ed)
    {
      int mid=(st+ed)/2;
      MergeSort(vec,st,mid);
      MergeSort(vec,mid+1,ed);
      Merge(vec,st,mid,ed);
    }
}
int main()
{
    vector<int> vec;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int element;
        cin>>element;
        vec.push_back(element);
    }
    MergeSort(vec,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<vec[i]<<" ";
    }

}
