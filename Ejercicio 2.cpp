#include <iostream>
using namespace std;
int main()
{
     long long  e{2},o{1},i {0};
    while(o<4000000)
    {
        int tempo;
        if(o%2==0)
        {
            i+=o;
            
        }
       
        
        
        e=o;//1,1,2,3
        o=o+tempo;//1,2,3,5
        tempo=e;//1,1,2,3
        cout<<o<<" ";//1,2,3,5
      
        
        
        
    }
    cout<<i<<endl;
}
