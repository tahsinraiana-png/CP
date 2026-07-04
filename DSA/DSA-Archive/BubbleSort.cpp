#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr,int n)
{
  for(int i=0; i<n-2;  i++)
  {
      for(int j=0; j<n-1; j++)
      {
          if(arr[j]>arr[j+1])
          {
              swap(arr[j],arr[j+1]);
          }
      }
  }
}
int main()
{
   int n;
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++)
    {
        int element;
        cin>>element;
        vec.push_back(element);
    }
    bubbleSort(vec,n);
    for(int i=0; i<vec.size();  i++)
    {
        cout<<vec[i]<<" ";
    }
}
