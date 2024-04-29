#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double sum=0,c;
    cin >>n;
    int p[n];
    for(int i=0;i<n;i++)
    {
        cin >> p[i];
        sum=sum+p[i];
    }
    c=sum/n;
    cout << setprecision(12) << fixed << c << endl;
    return 0;
}
