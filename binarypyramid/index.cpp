#include <iostream>
using namespace std;
int main()
{
  int flag=0;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<=i;j++)
    { 
      if((i+j)%2==0)
         cout<<!flag<<" ";
      else
        cout<<flag<<" ";
    }

    cout<<endl;
  }
}
