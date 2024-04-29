#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string a,b,c,ab;
    cin >> a >> b >> c;
    ab=a+b;
    sort(ab.begin(),ab.end());
    sort(c.begin(),c.end());
    if(ab.compare(c)==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
