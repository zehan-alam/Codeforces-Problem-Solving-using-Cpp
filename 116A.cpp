#include<iostream>
using namespace std;
int main()
{
    int n,s=0,i,j,maxs=0,p[2000][2];
    cin >> n;
    for(j=0; j<n; j++)
    {
        for(i=0; i<2; i++)
        {
            cin >> p[i][j];
        }
        s=p[1][j]-p[0][j]+s;
        if(s>maxs)
        {
            maxs=s;
        }
    }
    cout << maxs << endl;
    return 0;
}
