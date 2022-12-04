#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int X,Y;
cin>>X,Y;
int sum=(6/2)*X;
int sup=(6/3)*Y;

if(sum<sup)
{
cout<<sum<<endl;
}
else{
cout<<sup<<endl;
}
}
    return 0;
}