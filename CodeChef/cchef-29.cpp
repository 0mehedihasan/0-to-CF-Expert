#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int N,X,K;
cin>>N>>X>>K;
int sum=N*X;
if(sum<=K)
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