#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    cout << (n/2)-n*(n%2) << endl;
    return 0;
}
