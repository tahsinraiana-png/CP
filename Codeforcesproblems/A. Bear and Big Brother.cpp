#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(b>10)
    {
        return 0;
    }
    if(a>b)
    {
        return 0;
    }
    int year=0;
    while(1)
    {

        if(a<=b)
        {
            year++;
            a=a*3;
            b=b*2;
        }
        else
        {
            cout<<year;
            return 0;
        }
    }
}
