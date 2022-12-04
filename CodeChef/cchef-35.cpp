#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int X,P,Q;
cin>>X>>P>>Q;
if(P>Q)
{
int fine=X*(P-Q);
cout<<fine<<endl;
}
else
{
cout<<0<<endl;
}
}
    return 0;
}