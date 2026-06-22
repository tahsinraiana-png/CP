#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char a;
    int b;

    for(int i=65;i<=90; i++ )
    {int c=0;
        for(int j=0; j<n;j++)
        {

            a=s[j];
            b=(int)a;
            if(b==i||b==(i+32))
            {
                c=1;
                break;
            }



        }
                if(c==0){
                cout<<"NO";
                return 0;}


    }
    cout<<"YES";

}
