#include<iostream>
using namespace std;
int main()
{
    int n,m=0,welfare=0;
    cin >> n;
    int citizen[n];
    for(int i=0;i<n;i++)
    {
        cin >> citizen[i];
        m=max(m,citizen[i]);
    }
    for(int i=0;i<n;i++)
    {
        welfare=welfare+(m-citizen[i]);
    }
    cout << welfare << endl;
    return 0;
}
