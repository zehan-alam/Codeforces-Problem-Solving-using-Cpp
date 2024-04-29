#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin >>n;
    string a="hate",b="love";
    if(n==1)
    {
        cout << "I hate it" << endl;
    }
    else
    {
        cout << "I hate" << flush;
        for(i=2; i<=n; i++)
        {
            if(i%2!=0)
            {
                cout << " that I " << a << flush;
            }
            if(i%2==0)
            {
                cout << " that I " << b << flush;
            }
        }
        cout << " it" << endl;
    }
    return 0;
}
