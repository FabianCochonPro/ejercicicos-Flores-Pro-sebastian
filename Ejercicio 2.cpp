#include <iostream>

using namespace std;
int fibonacci(int n)
{
    int e{ 2 }, u{1 }, tempU = 0;
    for (int i{ 0 }; i < n-1; i++)
    {
        if (i == 0)
            cout << u <<" ";
        cout << e << " ";
        tempU = u;
        u = e;

        e = e + tempU;

    }
    cout << endl;
    return e;
}
int main()
{
    fibonacci(4000000);

}
