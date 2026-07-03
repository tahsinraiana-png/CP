#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>  &arr)
{

    for(int i=1; i<arr.size(); i++)
    {
        int key=arr[i];
        int j=i-1;

        while(j>=0&&key<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=key;

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
    insertionSort(vec);
    for(int i=0; i<vec.size();  i++)
    {
        cout<<vec[i]<<" ";
    }
}
