#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
fast();
int a[8] = {1,5,3,3,2,7,9,2};
for(int i =2;i<8-1;i++)
{
    a[i] = a[i+1];
}
for(int i=0;i<8-1;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}

