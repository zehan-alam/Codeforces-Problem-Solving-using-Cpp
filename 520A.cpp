#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char> l;

	int n;char ch;
	cin>>n;
	while(n--)
	{
		cin>>ch;
		l.insert(toupper(ch));
	}
    if(l.size()<26)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}
