#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
fast();
    string a[6] = {"sujan","prodhan","sahanur","mahfuz"};

    sort(a,a+5);
   int add=0;
    string s = "rahim";
 for(int i=0;i<5;i++)
 {
    if(a[i] > s)
    {
        add = i;
        break;
    }
 }
 for(int i=5;i>add;i--)
 {
     a[i] = a[i-1];
 }
a[add] = s;
for(int i=0;i<6;i++)
{
    cout<<a[i] <<" ";
}
cout<<endl;
return 0;
}
