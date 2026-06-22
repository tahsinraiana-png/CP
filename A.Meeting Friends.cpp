#include<iostream>
using namespace std;

int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int meetingpoint;;
    meetingpoint=(x1+x2+x3)/3;
    int totaldistance;
    int distance1=x1-meetingpoint;
    int distance2=x2-meetingpoint;
    int distance3=x3-meetingpoint;
    if(distance1<0)
    {
        distance1=-distance1;
    }
    if(distance2<0)
    {
        distance2=-distance2;
    }
    if(distance3<0)
    {
        distance3=-distance3;
    }
    totaldistance= distance1+distance2+distance3;
    cout<<totaldistance;
}
