#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,count=0;
    string input,c;
    string h="H",q="Q",n="9";
    cin >> input;
    for(i=0; i<input.size(); i++)
    {
        c=input[i];
        if((c.compare(h))==0||(c.compare(q))==0||(c.compare(n))==0)
        {
            count++;
        }
    }
    if(count>0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
