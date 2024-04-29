#include<iostream>
using namespace std;
int main()
{
    int n,m=0,c=0;
    cin >> n;
    int mishka[n],chris[n];
    for(int i=0;i<n;i++)
    {
        cin >> mishka[i] >> chris[i];
        if(mishka[i]>chris[i])
        {
            m++;
        }
        if(mishka[i]<chris[i])
        {
            c++;
        }
    }
    if(m>c)
    {
        cout << "Mishka" << endl;
    }
    if(m<c)
    {
        cout << "Chris" << endl;
    }
    if(m==c)
    {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
