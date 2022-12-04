#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int A,B;
cin>>A>>B;
int sum=A+B;
if(sum%2==0)
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