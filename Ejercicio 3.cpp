#include <iostream>
using namespace std;
int main()
{
   long long n=600851475143,i{3};int primoM{0};
   while(i<=n)
   {
     
     
     if(n%i==0)
     {
        n/=i;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {

                break;
            }
            else
                primoM=i;
        }
    
     }
     i=i+2;
    
   }
   cout<<"El primo mayor "<<primoM;
   return 0;
}
