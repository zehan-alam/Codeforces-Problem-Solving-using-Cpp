#include<iostream>
using namespace std;
int main()
{
    int n,total=0;;
    cin >> n;
    string a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i] ;
        if(a[i].compare("Tetrahedron")==0)
        {
            total+= 4;
        }
        if(a[i].compare("Cube")==0)
        {
            total+= 6;
        }
        if(a[i].compare("Octahedron")==0)
        {
            total+= 8;
        }
        if(a[i].compare("Dodecahedron")==0)
        {
            total+= 12;
        }
        if(a[i].compare("Icosahedron")==0)
        {
            total+= 20;
        }
    }
    cout << total;
    return 0;
}
