#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int i=low;
    int j=high;

    int pivot=arr[low];
    while(i<j){
    while(i<=high-1&&pivot>=arr[i])
    {

        i++;
    }
    while(j>=low+1&&pivot<=arr[j])
    {
        j--;
    }
    if(i<j)
        swap(arr[i],arr[j]);
    }
        swap(arr[low],arr[j]);

    return j;
}
void QuickSort(vector<int> &vec, int low,int high)
{
    if(low<high)
    {
        int pi=partition(vec,low, high);
        QuickSort(vec,low,pi-1);
        QuickSort(vec,pi+1,high);

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
    QuickSort(vec,0,n-1);
    for(int i=0; i<vec.size();  i++)
    {
        cout<<vec[i]<<" ";
    }
}
