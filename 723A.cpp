#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x[3],n=3;
    while(n--)
    {
       cin >> x[n];
    }
    sort(x,x+3);
    cout << x[2]-x[0] ;
    return 0;
}
