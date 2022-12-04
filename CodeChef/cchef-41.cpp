#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int X,Y;
cin>>X>>Y;
int sum=X+200;
if(Y>=X&&Y<=sum)
{
cout<<"YES"<<endl;
}
else
{
cout<<"NO"<<endl;
}
}
    return 0;
}