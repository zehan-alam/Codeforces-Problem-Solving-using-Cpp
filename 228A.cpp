#include<iostream>
using namespace std;
int main()
{
    int s[4],c=0;
    bool a;
    for(int i=0; i<4; i++)
    {
        cin >> s[i];
    }
    for(int i=0; i<4; i++)
    {
        a=false;
        for(int j=i+1; j<4; j++)
        {
            if(s[i]==s[j]&&a==false)
            {
                c++;
                a=true;
            }
        }
    }
    cout << c << endl;
    return 0;
}
