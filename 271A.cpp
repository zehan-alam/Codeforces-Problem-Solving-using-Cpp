#include<iostream>
using namespace std;
int main()
{
    int year,a,b,c,d;
    cin >> year;
    do{
        year++;
        a=year/1000;
        b=(year/100)%10;
        c=(year/10)%10;
        d=year%10;
    }while(a==b||a==c||b==c||b==d||c==d||d==a);
    cout << year << endl;
    return 0;
}
