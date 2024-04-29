#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p[n],p1[n];
    for(int i=0;i<n;i++)
    {
        cin >> p[i];
        p1[p[i]]=i+1;
    }
    for(int i=1;i<=n;i++)
    {
        cout << p1[i] << " " <<flush;
    }
    return 0;
}
