#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int X1,Y1,X2,Y2;
cin>>X1>>Y1>>X2>>Y2;
int sum=X1+Y1;
int sup=X2+Y2;
if(sum<sup)
{
cout<<sum<<endl;
}
else
{
cout<<sup<<endl;
}
}
    return 0;
}