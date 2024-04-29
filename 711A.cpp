#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin >> n ;
    string seats,s;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        seats+= s+"\n";
    }
    int pos=seats.find("OO");
    if(pos>=0)
    {
        seats.replace(pos,2,"++");
        cout << "YES\n" << seats;
    }
    else
        cout << "NO" ;
    return 0;
}
