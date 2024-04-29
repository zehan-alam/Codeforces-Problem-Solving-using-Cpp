#include<iostream>
using namespace std;
int main()
{
    string x1="++X",x3="X++",x2="--X",x4="X--",x;
    int i,n,c=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        if(x.compare(x1)==0||x.compare(x3)==0)
        {
            c++;
        }
        if(x.compare(x2)==0||x.compare(x4)==0)
        {
            c--;
        }
    }
    cout << c << endl;
    return 0;
}
