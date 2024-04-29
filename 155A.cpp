#include<iostream>
using namespace std;
int main()
{
    int n,Max,Min,best=0;
    cin >> n;
    int points[n];
    cin >> points[0];
    Min=points[0];
    Max=points[0];
    for(int i=1;i<n;i++)
    {
        cin >> points[i];
        if(points[i]>Max||points[i]<Min)
        {
            Max=max(Max,points[i]);
            Min=min(Min,points[i]);
            best++;
        }
    }
    cout << best << endl;
    return 0;
}
