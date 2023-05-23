#include <iostream>
using namespace std;
int main()
{ 
  for(int i=1;i<5;i++)
  { int t=i;
    for(int j=0;j<5-i;j++)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    { if(t!=0)
         cout<<t--;
      }
    for(int l=2;l<=i;l++)
    {
       cout<<l;
    }
      cout<<endl;
  }
}
