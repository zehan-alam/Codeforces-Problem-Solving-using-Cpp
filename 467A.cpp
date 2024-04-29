#include<iostream>
using namespace std;
int main()
{
    int i,n,p,q,c=0,v;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> p;
        cin >> q;
        v=q-p;
        if(v>=2)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
