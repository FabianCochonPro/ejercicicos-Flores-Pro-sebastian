#include <iostream>
using namespace std;
bool palindromo(int n)
{
    int original=n, reversa=0;
    while (n>0)
    {
        int ul=n%10;
        reversa=reversa*10+ul;
        n/=10;
    }
    return original==reversa;
}
int main()
{
    int espalindromo=0;
    for(int i=100;i<=999;i++)
    {
        for(int j=100;j<=999;j++)
        {
            int m=i*j;
            if (palindromo(m) && m >espalindromo)
            {
                espalindromo=m;
            }
        }
    }
    cout<<"el mayor palindromo de 3 digitos "<< espalindromo ;
}