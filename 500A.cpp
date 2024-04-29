#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    int cell[n];
    for(int i=0;i<n-1;i++)
    {
        cin >> cell[i];
    }
    if(cell[t-2]==2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}
