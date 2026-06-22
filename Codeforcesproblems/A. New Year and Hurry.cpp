#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int minRem=(4*60);
    minRem=minRem-k;
    int totalProb=0;

    for(int i=1; i<=n; i++)

    {
        if((minRem-5*i)>=0)
        {
            minRem=minRem-(5*i);
            totalProb++;
        }
        else
        {
            break;
        }
    }
    cout<<totalProb;
}
