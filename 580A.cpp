#include<iostream>
using namespace std;
int main()
{
    int n,i,nd=1,c=1;
    cin >> n;
    int money[n];
    for(i=0;i<n;i++)
    {
        cin >> money[i];
    }
    for(i=1;i<n;i++)
    {
        if(money[i]>=money[i-1])
        {
            nd++;
            c=max(c,nd);
        }
        else
        {
            nd=1;
        }
    }

    cout << c << endl;
    return 0;
}
