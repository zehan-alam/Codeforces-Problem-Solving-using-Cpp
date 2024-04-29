#include<iostream>
using namespace std;
int main()
{
    string a;
    int temp,i,j;
    cin >> a;
    for(i=0;i<a.length();i=i+2)
    {
        for(j=0;j<=i;j=j+2)
        if((int)a[i]<(int)a[j])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    cout << a << endl;
    return 0;
}
