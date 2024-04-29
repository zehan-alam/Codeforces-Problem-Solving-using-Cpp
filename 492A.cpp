#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin >> n;
    while((i*(i+1)*(i+2)/6)<=n)
    {
        i++;
    }
    cout << i-1 << endl;
    return 0;
}
