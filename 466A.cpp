#include<iostream>
using namespace std;
int main()
{
    int n,m,a,b;
    cin >> n >> m >> a >> b ;
    cout << min(a*n,(n/m)*b+min((n%m)*a,b)) << endl;
    return 0;
}
