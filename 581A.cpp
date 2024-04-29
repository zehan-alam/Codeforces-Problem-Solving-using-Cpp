#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y;
    cin >> a >> b;
    if(a>=b)
    {
        x=a;
        y=b;
    }
    if(a<b)
    {
        x=b;
        y=a;
    }
    cout << y << " " << (x-y)/2 << endl;
    return 0;
}
