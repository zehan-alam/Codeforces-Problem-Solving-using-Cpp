#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0,a=0;
    string game;
    cin >> n >> game;
    for(int i=0;i<n;i++)
    {
        if(game[i]=='A')
            a++;
        if(game[i]=='D')
            d++;
    }
    if(a>d)
    {
        cout << "Anton" << endl;
    }
    else if(a<d)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}
