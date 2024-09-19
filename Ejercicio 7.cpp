#include <iostream>
using namespace std;
int main()
{
    int c{0},primop=10001;
    
        
    for(int i=2;i<1000000;i++)
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
                
                
                c++;
                
                }
        if(primop==c)
        {
            cout<<"El primo de la posicion "<<primop<<" es: "<<i;
            break;
        }
    }
   

}