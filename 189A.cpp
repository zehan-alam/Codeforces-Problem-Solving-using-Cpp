#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,length[3],i=0;
    double cut=0;
    cin >> n >> length[0] >> length[1] >> length[2];
    sort(length,length+3);
    if(n<=length[0]+length[1]+length[2])
    {
        while(n>0)
        {
            n-=length[i++];
            cut++;
        }
    }
    else
    {
            cut=n/length[0];
    }
    cout << cut << endl;
    return 0;
}
