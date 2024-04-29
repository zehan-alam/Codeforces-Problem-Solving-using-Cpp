#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n=0,h=0,i;
    cin >> t;
    int A[t];
    for(i=0;i<t;i++)
    {
        cin >> A[i];
        h+=A[i];
    }
    sort(A,A+t);
    for(i=0;2*n <= h;i++)
    {
        n+=A[t-1-i];
    }
    cout << i << endl;
    return 0;
}
