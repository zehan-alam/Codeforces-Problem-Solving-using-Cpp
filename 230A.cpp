#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int s,n;
    cin >> s >> n;
    pair <int,int> X[n];
    for(int i=0;i<n;i++)
    {
        cin >> X[i].first >> X[i].second;
    }
    sort(X,X+n);
    for(int i=0;i<n;i++)
    {
        if(X[i].first<s)
        {
            s+= X[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
