#include<iostream>
using namespace std;
int main()
{
    long long n1,n2;
    int i,j=0,digit,hudai=0,number[18];
    cin >> n1;
    n2=n1;
    while(n1!=0)
    {
        n1=n1/10;
        j++;
    }
    for(i=0; i<j; i++)
    {
        digit=n2 % 10;
        n2=n2/10;
        number[i]=digit;
        if(number[i]==4||number[i]==7)
        {
            hudai++;
        }
    }
    if(hudai==4||hudai==7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
