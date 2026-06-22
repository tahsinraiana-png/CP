#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[n];
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    long double sum=0;

    for(int i=0; i<n; i++)
    {
        sum=sum+p[i];
    }

    double frac=(sum/n);
    cout<<fixed<<setprecision(12)<<frac;
    }
