#include<bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int up=0,low=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a')
            low++;
        else
            up++;
    }
    if(up<=low)
        for(int i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
    }

    else
        for(int i=0;i<s.length();i++)
    {
        s[i]=toupper(s[i]);
    }
    cout << s << endl;
    return 0;
}
