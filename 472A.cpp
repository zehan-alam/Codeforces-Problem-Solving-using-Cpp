#include<iostream>
using namespace std;
bool isComposite(int a)
{
    if (a <= 1)  return false;
    if (a <= 3)  return false;
    if (a%2 == 0 || a%3 == 0) return true;
    for (int i=5; i*i<=a; i=i+6)
        if (a%i == 0 || a%(i+2) == 0)
           return true;

    return false;
}
int main()
{
    int n,x,y;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        if(isComposite(i)==true)
        {
            x=i;
            y=n-x;
            if(isComposite(y)==true)
            {
                break;
            }
        }
    }
    cout << x << " " << y << endl;
    return 0;
}
