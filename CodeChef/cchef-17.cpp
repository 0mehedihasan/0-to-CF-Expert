#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--){
int A,B,C;
cin>>A>>B>>C;
if(A>B&&A>C&&B>C)
{
cout<<A-C<<endl;
}
else if(A>B&&A>C&&B<C)
{
cout<<A-B<<endl;
}
else if(B>A&&B>C&&A>C)
{
cout<<B-C<<endl;
}
else if(B>A&&B>>C&&A<C)
{
cout<<B-A<<endl;
}
else if(C>A&&C>B&&A>B)
{
cout<<C-B<<endl;
}
else
{
cout<<C-A<<endl;
}
}
    return 0;
}