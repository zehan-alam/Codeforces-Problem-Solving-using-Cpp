#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    bool c=true;
    for(int i=1;i<a.length();i++)
    {
        if(a[i]>='a')
        {
            c=false;
            break;
        }
    }
    if(c)
    {
        for (int i = 0; i < a.length(); ++i)
        {
            if (a[i] >= 'a')
            {
                a[i] -= ('a' - 'A');
            }
            else
            {
                a[i] += ('a' - 'A');
            }
        }
    }
    cout << a << endl;
    return 0;
}
