#include<iostream>
using namespace std;
int main()
{
    int n,i,j,u=0,v=0,w=0,co[100][100];
    cin >> n;
    for(j=0;j<n;j++)
    {
        for(i=0;i<3;i++)
        {
            cin >> co[i][j];
        }
        u=co[0][j]+u;
        v=co[1][j]+v;
        w=co[2][j]+w;
    }
    if(u==0&&v==0&&w==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
