#include<iostream>
using namespace std;
int main()
{
    int a,b,weight=0;
    cin >> a;
    cin >> b;
    while(a<=b)
    {
        a=3*a;
        b=2*b;
        weight++;
    }
    cout << weight << endl;
    return 0;
}
