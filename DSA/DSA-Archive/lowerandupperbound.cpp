#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
void lowerBound(int num)
{

    int low=0; int high=vec.size()-1;
    int mid;
    int ans=vec.size();
    while(low<=high)
    {
        mid=(low+high)/2;
        if(vec[mid]>=num)
        {
            ans=mid;
            high=mid-1;
        }
        else if(vec[mid]<num)
        {
            low=mid+1;
        }


    }

        cout<<"lower bound"<<ans<<endl;
}
void upperBound(int num)
{
    int low=0;
    int high=vec.size()-1;
    int ans=vec.size();
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(vec[mid]>num)
        {
           ans=mid;
           high=mid-1;
        }
        else if(vec[mid]<=num)
        {
            low=mid+1;

        }
    }
    cout<<"upper bound"<<ans;
}
int  main()
{
    int n;
    cin>>n;
    int m;
  for(int i=0; i<n; i++)
  {
      cin>>m;
      vec.push_back(m);
  }
  int num;
  cin>>num;
  lowerBound(num);
  upperBound(num);

}
