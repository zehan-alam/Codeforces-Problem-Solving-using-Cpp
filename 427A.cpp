#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,c=0;
    cin >> n;
    int event[n];
    for(int i=0;i<n;i++)
    {
        cin >> event[i];
        sum=sum+event[i];
        if(sum<0)
        {
            c++;
            sum=0;
        }
    }
    cout << c << endl;
    return 0;
}
