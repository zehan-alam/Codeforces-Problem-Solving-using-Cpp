#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=0; j<m; j++)
            {
                cout << "#" << flush;
            }
            cout << "" << endl;
        }
        if(i%2==0)
        {
            if(i%4==0)
            {
                cout << "#" << flush;
            }
            for(int j=1;j<m;j++)
            {
                cout << "." << flush;
            }
            if(i%4!=0)
            {
                cout << "#" << flush;
            }
            cout << "" << endl;
        }
    }
    return 0;
}
