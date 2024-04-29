#include<iostream>
#include<string>
using namespace std;
int main()
{
    string rSong;
    int pos=0;
    cin >> rSong;
    int n=rSong.length();
    for(int i=0;i<n/3;i++)
    {
        pos=rSong.find("WUB");
        if(pos<0)
        {
            break;
        }
        rSong.erase(rSong.begin()+pos,rSong.begin()+pos+3);
        if(pos>0)
            rSong.insert(pos," ");
    }
    cout << rSong;
    return 0;
}
