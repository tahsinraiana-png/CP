#include<iostream>
using namespace std;
int main()
{
    string s1;
    string s2;
    string s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;

    for(int i=0; i<s1.length(); i++)
    { int a=0;
        for(int j=0; j<s3.length();j++){
        if(s1[i]==s3[j])
        {
            a=1;
            s3.erase(j,1);
            break;

        }


        }
        if(a==0)
        {
             cout<<"NO";
            return 0;
        }
    }
     for(int i=0; i<s2.length(); i++)
    { int a=0;
        for(int j=0; j<s3.length();j++){
        if(s2[i]==s3[j])
        {
            a=1;
            s3.erase(j,1);
            break;

        }

        }
        if(a==0)
        {
             cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}
