#include<iostream>
using namespace std;
int main()
{
    int n,z,c;
    bool a=true;
    cin >> n;
    string name[n];
    for(int i=0;i<n;i++)
    {
        cin >> name[i];
    }

    for(int i=0;i<n;i++)
    {
        z=0;
        c=0;
        for(int j=0;j<i;j++)
        {
            if(name[i]==name[j])
            {
                z++;
                c++;
            }
        }
        if(c>0)
        {
            cout << name[i] << z << endl;
        }
        if(c==0)
        {
            cout << "OK" << endl;
        }
    }
    return 0;
}
