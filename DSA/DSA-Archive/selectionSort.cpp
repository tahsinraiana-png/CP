#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr,int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;

            }
        }
        swap(arr[i],arr[minIndex]);
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
    selectionSort(vec,n);
    for(int i=0; i<vec.size();  i++)
    {
        cout<<vec[i]<<" ";
    }
}
