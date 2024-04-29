#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,k,n1;
    cin >> n;
    cin >> k;
    n1=(n/2)+(n%2);
    if(k>n1)
    {
        cout << 2*(k-n1) << endl;
    }
    else
    {
        cout << 2*k-1 << endl;
    }
    return 0;
}
