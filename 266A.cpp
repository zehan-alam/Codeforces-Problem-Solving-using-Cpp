#include<iostream>
using namespace std;
int main()
{
    int n,c=0,i;
    string stone;
    cin >> n;
    cin >> stone;
    for(i=0;i<n;i++)
    {
        if(stone[i]==stone[i+1])
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
