#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int X,Y;
cin>>X>>Y;
if(X==Y)
{
cout<<"ANY"<<endl;
}
else if(X>Y)
{
cout<<"First"<<endl;
}
else
{
cout<<"Second"<<endl;
}
}
    return 0;
}