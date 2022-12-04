#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int X,Y;
cin>>X>>Y;
if(X>Y)
{
int sum=(X-Y);
cout<<sum<<endl;
}
else
{
cout<<0<<endl;
}
}
    return 0;
}