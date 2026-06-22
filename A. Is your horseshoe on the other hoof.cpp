#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3,s4;
    int need=0;
    cin>>s1>>s2>>s3>>s4;
    int arr[4];
    arr[0]=s1;
    arr[1]=s2;
    arr[2]=s3;
    arr[3]=s4;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[i]==arr[j]){
            need++;
             break;
            }

        }
    }
    cout<<need;
}
