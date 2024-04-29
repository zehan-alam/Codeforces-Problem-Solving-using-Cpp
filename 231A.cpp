#include<iostream>
using namespace std;
int main()
{
    int i,j,n,z=0,c,mat[3][1000];
    cin >> n;
    for(j=0; j<n; j++)
    {
        c=0;
        for(i=0; i<3; i++)
        {
            cin >> mat[i][j];
            if(mat[i][j]==1)
            {
                c++;
            }
        }
        if(c>1)
        {
            z++;
        }
    }
    cout << z << endl;
    return 0;
}
