#include<iostream>
using namespace std;
int main()
{
    long long n,c=0;
    cin >> n;
    long long num[n];
    for(int i=0;i<n;i++)
    {
        cin >> num[i];
        for(long long j=1;j<=num[i];j++)
        {
            if(num[i]%j==0)
            {
                c++;
            }
        }
        if(c==3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        c=0;
    }
    return 0;
}
