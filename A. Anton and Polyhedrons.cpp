#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str[n];
    int total=0;
    for(int i=0;i<n; i++)
    {
        cin>>str[i];
    }
    for(int i=0; i<n; i++)
    {


    if(str[i]=="Tetrahedron")
    {
        total=total+4;
    }
    if(str[i]=="Cube" )
    {
        total=total+6;
    }
    if(str[i]=="Octahedron" )
    {
        total=total+8;
    }
    if(str[i]=="Dodecahedron" )
    {
        total=total+12;
    }
    if(str[i]=="Icosahedron")
    {
        total=total+20;
    }
    }
    cout<<total;




}
