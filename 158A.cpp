#include<iostream>
using namespace std;
int A[5],N,i,t;
main()
{
    cin>>N;
    while(cin>>t)A[t]++;
    A[1]=max(A[1]-A[3],0);
    cout<< A[3]+A[4]+(A[1]+2*A[2]+3)/4 << endl;
}
