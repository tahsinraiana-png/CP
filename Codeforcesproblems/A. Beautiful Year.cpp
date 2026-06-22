#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b=n+1;
    int d1,d2,d3,d4;
    int a;

    for(int i=1000; i<=9000; i++)
    {
        a=b;
        d1=a%10;
        a=a/10;
        d2=a%10;
        a=a/10;
        d3=a%10;
        a=a/10;
        d4=a%10;
        if(d1!=d2&&d2!=d3&&d3!=d4&&d4!=d1&&d4!=d2&&d3!=d1)
        {
            cout<<b;
            return 0;

        }
        else
        {
            b++;
        }

    }

}
