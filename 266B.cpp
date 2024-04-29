#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    string line;
    cin >> line;
    while(t>0)
    {
        for(int i=0; i<n; i++)
        {
            if(line[i+1]=='G'&&line[i]=='B')
            {
                swap(line[i],line[i+1]);
                i++;
            }
        }
        t--;
    }
    cout << line << endl;
    return 0;
}
