#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    if(t>9261)
    {
        return 0;
    }
    int a,b,c;
    int arr[t][3];
    for(int i=0; i<t;i++)
    {

        cin>>a>>b>>c;
    if(a>20||b>20||c>20)
    {
        return 0;
    }
    arr[i][0]=a;
    arr[i][1]=b;
    arr[i][2]=c;

    }
    for(int i=0; i<t; i++)
    {

           if(arr[i][1]+arr[i][2]==arr[i][0]||arr[i][2]+arr[i][0]==arr[i][1]||arr[i][0]+arr[i][1]==arr[i][2])
           {
               cout<<"YES\n";
           }
           else
           {
               cout<<"NO\n";
           }


}
}
