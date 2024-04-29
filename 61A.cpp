#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin >>a>>b;
    for(int i=0;a[i];i++)
    {
        cout << (a[i]+b[i])%2 << flush;
    }
    return 0;
}
