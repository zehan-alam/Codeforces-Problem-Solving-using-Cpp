#include<iostream>
using namespace std;
int main()
{
    int n,i,group=1;
    cin >> n;
    int mag[n];
    for(i=0;i<n;i++)
    {
        cin >> mag[i];
    }
    for(i=1;i<n;i++)
    {
        if(mag[i]!=mag[i-1])
        {
            group++;
        }
    }
    cout << group << endl;
    return 0;
}
