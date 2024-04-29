#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin >> n >> m;
    if(min(m,n)%2)
    {
        cout << "Akshat" << endl;
    }
    else
    {
        cout << "Malvika" << endl;
    }
    return 0;
}
