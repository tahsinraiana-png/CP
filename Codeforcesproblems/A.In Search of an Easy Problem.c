#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<n;
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a==0||a==1)
        {
            cout<<a;
        }
    }
    if(a=='0')
    {
        cout<<"EASY";
    }
    else{
        cout<<"HARD";
    }

}
