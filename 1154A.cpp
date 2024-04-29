#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n=4,x[4];
    while(n--)
    {
        cin >> x[n];
    }
    sort(x,x+4);
    cout << (x[0]-x[1]+x[2]) /2 << " " << x[3]-x[2] << " " << (x[2]+x[1]-x[0]) /2 << endl;

    return 0;
}
