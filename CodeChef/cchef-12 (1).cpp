#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int X,Y;
cin>>X>>Y;
if((X*2)>(Y*5))
{
cout<<"Chocolate"<<endl;
}
else if((X*2)==(Y*5))
{
cout<<"Either"<<endl;
}
else
{
cout<<"Candy"<<endl;
}
}
    return 0;
}