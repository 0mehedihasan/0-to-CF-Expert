#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int X,Y,N;
cin>>N>>X>>Y;
int sum=X+(Y*2);
if(sum>N)
{
cout<<"NO"<<endl;
}
else{
cout<<"YES"<<endl;
}
}
    return 0;
}