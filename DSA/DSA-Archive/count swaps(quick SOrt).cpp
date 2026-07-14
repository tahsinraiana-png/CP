#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high,int &count)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(i<=high-1 &&arr[i]<=pivot)
        {
            i++;
        }
        while(j>=low+1 && arr[j]>pivot)
        {
          j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
            count++;

        }
    }
    swap(arr[low],arr[j]);count++;
    return j;

}
void quickSort(vector<int> &arr,int low,  int high,int &count)
{

    if(low<high)
    {
        int pi=partition(arr,low,high,count);
        quickSort(arr,low,pi-1,count);
        quickSort(arr,pi+1,high,count);
    }
}
int main()
{
     int n;
    cin>>n;int count=0;
    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        int el;
        cin>>el;
        vec.push_back(el);
    }
    quickSort(vec,0,n-1,count);
    cout<<count;
}
