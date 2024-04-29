#include<iostream>
using namespace std;
int main()
{
    int n,m,l;
    cin >> n >> m;
    l=m*n;
    char color[l];
    for(int i=0; i<l; i++)
    {
        cin >> color[i];
    }
    for(int i=0; i<l; i++)
    {
        if(color[i]=='C'||color[i]=='M'||color[i]=='Y')
        {
            cout << "#Color" << endl;
            return 0;
        }
    }
    cout << "#Black&White" << endl;
    return 0;
}
