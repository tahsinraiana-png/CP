#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s[t];
    for(int i=0; i<t; i++)
    {
        cin>>s[i];


    }


    for(int i=0; i<t; i++)
    {
        for(int j=0; j<s[i].length(); j++)
        {
            s[i][j] = toupper(s[i][j]);
        }
    }
    for(int i = 0; i < t; i++)
    {
        if(s[i] == "YES")
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }




    }
