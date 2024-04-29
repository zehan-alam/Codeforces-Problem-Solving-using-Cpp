#include<iostream>
using namespace std;
int main()
{
    int n,c=0,j=0;
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin >> num[i];
        if(num[i]%2==0)
        {
            c++;
        }
    }
    if(c>1)
    {
        while(num[j]%2==0)
        {
            j++;
        }
        cout << j+1 << endl;
    }
    else
    {
        while(num[j]%2!=0)
        {
            j++;
        }
        cout << j+1 << endl;
    }
    return 0;
}
