#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int high, int mid,int &count)
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
            count++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
            count++;
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
void mergeSort(vector<int> &arr, int low, int high,int &count)
{

    if(low<high)
    {
        int mid=(low+high)/2;

        mergeSort(arr,low,mid,count);
        mergeSort(arr,mid+1, high,count);
        merge(arr,low,high,mid,count);
    }
}
int main()
{
    int n;
    cin>>n;int count=0;
    vector<int> vec1;

    for(int i=0; i<n; i++)
    {
        int el;
        cin>>el;
        vec1.push_back(el);
    }



    mergeSort(vec1,0,(n-1),count);
    for(int i=0; i<n;i++)
    {
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    cout<<count;

}

