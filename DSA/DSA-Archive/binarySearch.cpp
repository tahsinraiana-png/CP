#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr, int tar)
{
    int start=0;
    int endd =arr.size()-1;
    int mid=(0+(arr.size()-1));
    while(start<=endd)
    {
        if(tar>arr[mid])
        {
            mid=mid+1;
        }
        else if(tar<arr[mid])
        {
            mid=mid-1;
        }
        else
        {

            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr1={1,2,3,4,5,6,7};
    int tar1=4;
    cout<<binarysearch(arr1,tar1);
    vector<int> arr2={1,3,5,7,9,11,13};
    int tar2=7;
}
