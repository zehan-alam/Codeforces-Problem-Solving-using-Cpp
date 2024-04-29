#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    double a[t];
    for(int i=0;i<t;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<t;i++)
    {
        double d2=360/(180-a[i]);
        int d1 = (int)d2;
        if(d1==d2)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
