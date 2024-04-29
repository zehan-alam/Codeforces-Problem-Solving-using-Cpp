#include<iostream>
using namespace std;
int main()
{
    string word;
    cin >> word;
    for(int i=0;i<word.length();i++)
    {
        word[i]=tolower(word[i]);
        if(word[i]=='u'||word[i]=='a'||word[i]=='o'||word[i]=='y'||word[i]=='e'||word[i]=='i')
        {
            word.erase(word.begin()+i);
            i--;
        }
    }
    for(int i=0;i<word.length();i++)
    {
        cout << "." << word[i] << flush;
    }
    return 0;
}
