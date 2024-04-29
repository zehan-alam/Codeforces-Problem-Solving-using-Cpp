#include<iostream>
using namespace std;
int main()
{
    int n,h,i,s=0;
    cin >> n;
    cin >> h;
    int height[n];
    for(i=0;i<n;i++)
    {
        cin >> height[i];
        if(height[i]>h)
        {
            s++;
        }
    }
    cout << n+s << endl;
    return 0;
}
