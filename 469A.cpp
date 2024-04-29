#include<iostream>
#include<string>
using namespace std;
int main()
{
    int levels,x,y;
    cin >> levels;
    int X[levels+1],Y[levels+1],Count[levels+1]={0};
    cin >> x;
    for(int i=1;i<=x;i++)
    {
        cin >> X[i];
        Count[X[i]]++;
    }
    cin >> y;
    for(int i=1;i<=y;i++)
    {
        cin >> Y[i];
        Count[Y[i]]++;
    }
    for(int i=1;i<=levels;i++)
    {
        if(Count[i]==0)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}
