#include<iostream>
using namespace std;
int main()
{
    int k,r;
    cin >> k >> r ;
    for(int i=1;; i++)
    {
        if((k*i)%10==0||((k*i)%10)-r==0)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
