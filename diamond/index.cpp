#include <iostream>
using namespace std;
int main()
{
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<(5-i)/2;j++)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i=5;i>0;i--)
  {
    for(int j=0;j<(5-i)/2;j++)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    {
      cout<<"*";
    }
    cout<<endl;
  }




}
