#include<iostream>
using namespace std;
int main()
{
    int k,l,m,n,i,d,c=0;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    for(i=1;i<=d;i++)
    {
        if((i%k)==0||(i%l)==0||(i%m)==0||(i%n)==0)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
