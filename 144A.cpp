#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxE=0,minE=0;
    cin >> n;
    int height[n];
    for(int i=0; i<n; i++)
    {
        cin >> height[i];
        if(height[i]<=height[minE])
        {
            minE=i;
        }
        if(height[i]>height[maxE])
        {
            maxE=i;
        }
    }
    if(minE>maxE)
        cout << maxE+(n-minE)-1 << endl;
    else
        cout << maxE+(n-minE)-2 << endl;
    return 0;
}
