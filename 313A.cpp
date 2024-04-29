#include<iostream>
using namespace std;
int main()
{
    int a,m;
    cin >> a ;
    m=a;
    m=max(m,a/10);
    m=max(m,(a/100)*10+a%10);
    cout << m << endl;
    return 0;
}
