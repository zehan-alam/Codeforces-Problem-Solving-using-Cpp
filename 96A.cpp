#include<iostream>
using namespace std;
int main()
{
    int i,c=0;
    string n;
    cin >> n;
    for(i=1; i<n.size(); i++)
    {
        if(n[i]==n[i-1])
        {
            c++;
            if(c==6)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            c=0;
        }
    }
        cout << "NO" << endl;
    return 0;
}
