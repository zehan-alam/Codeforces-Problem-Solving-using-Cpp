#include<iostream>
using namespace std;
int main()
{
    int n,k,sum=0,time,i=1;
    cin >> n >> k ;
    time=240-k;
    while(sum<=time)
    {
        sum=sum+(5*i);
        i++;
    }
    if(i-2<=n)
    {
        cout << i-2 << endl;
    }
    else
    {
        cout << n << endl;
    }
    return 0;
}
