#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
fast();
int a[10] = {2,4,6,8,9,11,34,55,90,100};
int add = 99,pos =5;
for(int i = 10;i>5;i--)
{
   a[i]  = a[i-1];
}
a[5] = add;
for(int i=0;i<10;i++)
{
    cout<<a[i] <<" ";
}
cout<<endl;

return 0;
}

