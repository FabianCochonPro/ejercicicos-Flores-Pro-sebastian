#include <iostream>

using namespace std;
void largestprimefactor(int m)
{
    int e;
    for (int i=2; i<m; i++)
    {
        if(m%i==0)
        {
            bool P=true;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {   
                    P=false;
                    break;
                 }    
            }        
            if(P)
            {
                 cout<<i<<" "; 
                 e=i;
            }
                
                
                
            
        
          
        
        }
        
    } 
    

    cout<<"El numero mas largo es :"<<e;
}
int main()
{
  
  largestprimefactor(600851475143);
}
