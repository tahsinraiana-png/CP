#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int pivot=arr[high];
    cout<<pivot;
    int i=low;
    int j=high;
    while(i<j)
    {
        while(i<high &&arr[i]<pivot)
        {
            i++;
        }
        while(j>low && arr[j]>=pivot)
        {
          j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);


        }
    }
    swap(arr[high],arr[i]);
    return i;

}
void quickSort(vector<int> &arr,int low,  int high)
{

    if(low<high)
    {
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main()
{
     int n;
    cin>>n;
    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        int el;
        cin>>el;
        vec.push_back(el);
    }
    quickSort(vec,0,n-1);

}
