#include<iostream>
using namespace std;

int main()
{
int N;
cin>>N;
while(N--){
int x,y,z;
cin>>x>>y>>z;
if(x<y&&y<z)
{
cout<<y<<endl;
}
else if(x>y&&y>z)
{
cout<<y<<endl;
}
else if(x>y&&x<z)
{
cout<<x<<endl;
}
else if(x<y&&x>z)
{
cout<<x<<endl;
}
else
{
cout<<z<<endl;
}
}
    return 0;
}