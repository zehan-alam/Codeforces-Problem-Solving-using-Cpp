#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,diff=60066;
    cin >> n >> m ;
    int f[m];
    for(int i=0;i<m;i++)
    {
        cin >> f[i];
    }
    sort(f,f+m);
    for(int i=0;i<=m-n;i++)
    {
        diff=min(diff,f[n+i-1]-f[i]);
    }
    cout << diff << endl;
    return 0;
}
