#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int high, int mid)
{
    int i=low;
    int k=low;
    int j=mid+1;
    int temp[1000];
    while(i<=mid&& j<=high)
    {
        if(arr[i]<arr[j])
        {
            temp[k]=arr[i];
            i++;k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=low; i<=high;i++)
    {
        arr[i]=temp[i];
    }
}
void mergeSort(vector<int> &arr, int low, int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1, high);
        merge(arr,low,high,mid);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> vec1;
    vector<int> vec2;
    for(int i=0; i<n; i++)
    {
        int el;
        cin>>el;
        vec1.push_back(el);
    }
    int m;
    cin>>m;
     for(int i=0; i<m; i++)
    {
        int el;
        cin>>el;
        vec2.push_back(el);
    }
    vector<int> vec;
    for(int i=0; i<n; i++)
    {
       vec.push_back(vec1[i]);

    }
    for(int i=0; i<m; i++)
    {

       vec.push_back(vec2[i]);
    }
    mergeSort(vec,0,(n+m)-1);
    for(int i=0; i<n+m;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    double median;
    if((n+m)%2==0)
    {
        median = (vec[(n+m)/2 - 1] + vec[(n+m)/2]) / 2.0;
    }
    else
    {
        median=(vec[0+(n+m)/2]);

    }
    cout<<median;
}
