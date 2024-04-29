#include<iostream>
using namespace std;
int main()
{
    int i,j,mat[5][5],pos1,pos2,z=0;
    for(j=0; j<5; j++)
    {
        for(i=0; i<5; i++)
        {
            cin >> mat[i][j];
        }
    }
    for(j=0; j<5; j++)
    {
        for(i=0; i<5; i++)
        {
            if(mat[i][j]!=0)
            {
                pos1=i+1;
                pos2=j+1;
                break;
            }
        }
    }
    if(pos1>3)
    {
        while(pos1!=3)
        {
            pos1--;
            z++;
        }
    }
    if(pos1<3)
    {
        while(pos1!=3)
        {
            pos1++;
            z++;
        }
    }
    if(pos2>3)
    {
        while(pos2!=3)
        {
            pos2--;
            z++;
        }
    }
    if(pos2<3)
    {
        while(pos2!=3)
        {
            pos2++;
            z++;
        }
    }
    cout << z << endl;
    return 0;
}
