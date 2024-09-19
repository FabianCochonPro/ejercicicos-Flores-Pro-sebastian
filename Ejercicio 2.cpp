#include <iostream>

using namespace std;
int fibonacci(int n)
{
  int e{1},u,tempU=0 ;
  for(int i{0};i<=n;i++)
  {
    
    cout<<e<<" ";
    tempU=u;
    u=e;
    
    e=e+tempU;
    
  }
  cout<<endl;
  return e;
}
int main()
{
  fibonacci(10);
  
}