#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a[5] = { "mahfuz","prodhan" ,"rahim" ,"sahanur ","sujan"};
    string s = "rahim";
     int pos =0;
    for(int i=0;i<5;i++)
    {
        if(s == a[i])
           {
           pos =i;
                break;
           }
    }

   if(pos !=0)
   {
       for(int i=pos;i<5-1;i++)
       {
           a[i] = a[i+1];
       }
   }
  for(int i=0;i<5;i++)
  {
      cout<<a[i]<<" ";
  }
    cout<<endl;
}
